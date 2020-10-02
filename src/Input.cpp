#include <Input.h>
#include <algorithm>
#include <iostream>

std::string getUserInput()
{
    std::string input_from_user = "";
    std::cout << "Please enter your calculation (only with '+','-','*','/', "
                 "',', '.' and figures)"
              << std::endl;
    std::cin >> input_from_user;
    std::cout << "You chose the calculation " << input_from_user << std::endl;
    return input_from_user;
}

void remove_space( std::string &string_with_spaces, const int &size_of_string )
{
    // First function called in the process
    std::string str_without_spaces;
    const char *space = " ";
    for( int i = 0; i < size_of_string; ++i )
    {
        if( string_with_spaces[i] != *space )
        {
            str_without_spaces.push_back( string_with_spaces[i] );
        }
    }

    string_with_spaces = str_without_spaces;
}

bool is_input_empty(
    const std::string &input_from_user, const int &size_of_string )
{
    // the string does not have any spaces

    if( size_of_string == 0 )
    {
        std::cout
            << "Error : your calculation is empty : please enter a calculation"
            << std::endl;
        return false;
    }

    return true;
}

bool start_with_operator( std::string &input_from_user, int &size_of_string )
{
    // the string does not have any spaces and is not empty

    char multiply = '*';
    char divide = '/';
    char pluss = '+';

    while( input_from_user[0] == pluss && size_of_string != 0 )
    {
        input_from_user.erase( 0, 1 );
        size_of_string--;
    }

    if( size_of_string == 0 )
    {
        std::cout << "After removing the '+' at the beginning your calculation "
                     "is empty : please correct it"
                  << std::endl;
        return false;
    }

    if( input_from_user[0] == multiply || input_from_user[0] == divide )
    {
        std::cout << "Error : you put a '*' or a '/' at the beginning of the "
                     "calculation"
                  << std::endl;
        return false;
    }

    return true;
}

bool end_with_operator(
    const std::string &input_from_user, const int &size_of_string )
{
    // the string does not have any spaces, is not empty and does not start with
    // an operator (except + or -)

    char multiply = '*';
    char divide = '/';
    char pluss = '+';
    char minuss = '-';

    if( input_from_user[size_of_string - 1] == pluss
        || input_from_user[size_of_string - 1] == multiply
        || input_from_user[size_of_string - 1] == divide
        || input_from_user[size_of_string - 1] == minuss )
    {
        std::cout << "Error : you put a '+', a '*', a '-' or a '/' at the end "
                     "of the calculation"
                  << std::endl;
        return false;
    }

    return true;
}

bool all_characters_are_valid(
    const std::string &input_from_user, const int &size_of_string )
{
    // the string does not have any spaces, is not empty and does not start
    // (except + or -) or end with an operator

    char allowed_chars_array[15];

    for( int allowed_char = 0; allowed_char < 10; ++allowed_char )
    {
        allowed_chars_array[allowed_char] = '0' + allowed_char;
    }

    allowed_chars_array[10] = '+';
    allowed_chars_array[11] = '-';
    allowed_chars_array[12] = '*';
    allowed_chars_array[13] = '/';
    allowed_chars_array[14] = '.';

    // The idea is to check all the inputs in the formula, compared to a allowed
    // characters array

    for( int char_index = 0; char_index < size_of_string; ++char_index )
    {
        bool present = false;
        for( int allowed_char = 0; allowed_char < 15; ++allowed_char )
        {
            if( input_from_user[char_index]
                == allowed_chars_array[allowed_char] )
            {
                present = true;
            }
        }
        if( present == false )
        {
            std::cout
                << "You entered a non valid character (at least) which is "
                << input_from_user[char_index]
                << ". Only '+','-','*','/', '.' and figures are allowed"
                << std::endl;
            return false;
        }
    }

    return true;
}

bool no_successive_operators(
    const std::string &input_from_user, const int &size_of_string )
{
    // the string does not have any spaces, is not empty, does not start (except
    // + or -) or end with an operator and does not have unwanted characters

    char multiply = '*';
    char divide = '/';
    char pluss = '+';
    char minuss = '-';
    char dot = '.';

    for( int char_index = 0; char_index < size_of_string - 1; ++char_index )
    {
        // Checking if two successive characters are operator
        char actual_char = input_from_user[char_index];
        char next_char = input_from_user[char_index + 1];
        if( ( actual_char == multiply || actual_char == divide
                || actual_char == pluss || actual_char == minuss )
            && ( next_char == multiply || next_char == divide
                 || next_char == pluss ) )
        {
            std::cout << "You put 2 operators side by side : " << actual_char
                      << " and " << next_char << " : please correct this"
                      << std::endl;
            return false;
        }
        else if( actual_char == dot && next_char == dot )
        {
            std::cout << "You put 2 dots side by side : please correct this"
                      << std::endl;
            return false;
        }
    }
    return true;
}

void replace_comma_by_point(
    std::string &input_from_user, const int &size_of_string )
{
    // All the functions above have been called ;
    for( int char_index = 0; char_index < size_of_string - 1; ++char_index )
    {
        if( input_from_user[char_index] == ',' )
        {
            input_from_user[char_index] = '.';
        }
    }
}

void replace_non_operator_minus(
    std::string &input_from_user, int &size_of_string )
{
    // Should be done before the checking of 2 following operators because it
    // can then happen at the beginning

    char multiply = '*';
    char divide = '/';
    char pluss = '+';
    char minuss = '-';

    while( input_from_user[0] == '-' && input_from_user[1] == '-' )
    {
        input_from_user.erase( 0, 2 );
        size_of_string -= 2;
    }
    if( input_from_user[0] == '-' )
    {
        input_from_user[0] = '_';
    }
    for( int char_index = 0; char_index < size_of_string - 1; ++char_index )
    {
        // Checking if two successive characters are operator
        char actual_char = input_from_user[char_index];
        char next_char = input_from_user[char_index + 1];
        if( ( actual_char == minuss || actual_char == pluss
                || actual_char == divide || actual_char == multiply )
            && next_char == minuss )
        {
            input_from_user[char_index + 1] = '_';
        }
    }
}

void add_zero_before_alone_point(
    std::string &input_from_user, int &size_of_string )
{
    // The input can not have 2 following operators, it has no spaces, no comma,
    // it is not empty, it does not start or end with an operator and all
    // characters are valid

    char multiply = '*';
    char divide = '/';
    char pluss = '+';
    char minuss = '-';
    char other_minus = '_';

    if( input_from_user[0] == '.' )
    {
        input_from_user.insert( 0, "0" );
        size_of_string++;
    }

    for( int char_index = 0; char_index < size_of_string - 1; ++char_index )
    {
        char actual_char = input_from_user[char_index];
        char next_char = input_from_user[char_index + 1];
        if( ( actual_char == multiply || actual_char == divide
                || actual_char == pluss || actual_char == minuss
                || actual_char == other_minus )
            && ( next_char == '.' ) )
        {
            input_from_user.insert( char_index + 1, "0" );
            size_of_string++;
        }
    }
}

void add_zero_after_alone_point(
    std::string &input_from_user, int &size_of_string )
{
    // The input can not have 2 following operators, it has no spaces, no comma,
    // it is not empty, it does not start or end with an operator and all
    // characters are valid

    char multiply = '*';
    char divide = '/';
    char pluss = '+';
    char minuss = '-';

    if( input_from_user[size_of_string - 1] == '.' )
    {
        input_from_user.insert( size_of_string, "0" );
        size_of_string++;
    }

    for( int char_index = 0; char_index < size_of_string - 1; ++char_index )
    {
        char actual_char = input_from_user[char_index];
        char next_char = input_from_user[char_index + 1];
        if( ( next_char == multiply || next_char == divide || next_char == pluss
                || next_char == minuss )
            && ( actual_char == '.' ) )
        {
            input_from_user.insert( char_index + 1, "0" );
            size_of_string++;
        }
    }
}

bool check_and_format_Input( std::string &input_from_user )
{
    int size_of_string = input_from_user.size();

    remove_space( input_from_user, size_of_string );

    size_of_string = input_from_user.size();

    replace_comma_by_point( input_from_user, size_of_string );

    // Checking if the input is not empty
    if( is_input_empty( input_from_user, size_of_string ) == false )
    {
        return false;
    }

    if( start_with_operator( input_from_user, size_of_string ) == false )
    {
        return false;
    }

    if( end_with_operator( input_from_user, size_of_string ) == false )
    {
        return false;
    }

    // Now we are checking if all the input characters are corrects

    if( all_characters_are_valid( input_from_user, size_of_string ) == false )
    {
        return false;
    }

    replace_non_operator_minus( input_from_user, size_of_string );

    if( no_successive_operators( input_from_user, size_of_string ) == false )
    {
        return false;
    }

    add_zero_before_alone_point( input_from_user, size_of_string );

    add_zero_after_alone_point( input_from_user, size_of_string );

    return true;
}

// int main(){
//    std::string test("1 +2.5 +2. -.5");
//    checkInput(test);
//    std::cout << test << std::endl;
//}
