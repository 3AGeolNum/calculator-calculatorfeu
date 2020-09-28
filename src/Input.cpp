#include <iostream>
#include <string>
#include <algorithm>

std::string getUserInput(){

    std::string input_from_user = "";
    std::cout << "Please enter your calculation (only with '+','-','*','/', ',', '.' and figures)" << std::endl;
    std::cin >> input_from_user;
    std::cout << "You chose the calculation " << input_from_user << std::endl;
    return input_from_user;

}

void remove_space(std::string &string_with_spaces, int size_of_string){

    std::string str_without_spaces;
    const char* space = " ";
    for (int i=0; i<size_of_string; ++i){

        if (string_with_spaces[i] != *space){
            str_without_spaces.push_back(string_with_spaces[i]);
        }

    }

    string_with_spaces = str_without_spaces;

}

bool is_input_empty(std::string input_from_user, int size_of_string){
    //the string does not have any spaces
    //It checks if the string is empty or not after removing the strings

    if (size_of_string == 0){
        std::cout << "Error : your calculation is empty : please enter a calculation" << std::endl;
        return false;
    }

        return true;

}

bool start_with_operator(std::string input_from_user){
    //the string does not have any spaces and is not empty
    //Checking if the calculation begins with a '+', a '*' or a '/'

    const char* multiply = "*";
    const char* divide = "/";
    const char* pluss = "+";
    const char* minuss = "-";

    if (input_from_user[0] == *multiply || input_from_user[0] == *divide){
        std::cout << "Error : you put a '*' or a '/' at the beginning of the calculation" << std::endl;
        return false;
    }

    return true;

}

bool end_with_operator(std::string input_from_user, int size_of_string){
    //the string does not have any spaces, is not empty and does not start with an operator (except + or -)
    //Checking if the calculation ends with a '*' or a '/'
    const char* multiply = "*";
    const char* divide = "/";
    const char* pluss = "+";
    const char* minuss = "-";


    if (input_from_user[size_of_string -1] == *pluss || input_from_user[size_of_string -1] == *multiply || input_from_user[size_of_string -1] == *divide || input_from_user[size_of_string -1] == *minuss){
        std::cout << "Error : you put a '+', a '*', a '-' or a '/' at the end of the calculation" << std::endl;
        return false;
    }

    return true;


}

bool all_characters_are_valid(std::string input_from_user, int size_of_string){
    //the string does not have any spaces, is not empty and does not start (except + or -) or end with an operator
    //Checking if the characters are allowed
    char allowed_chars_array[16];

    for (int allowed_char = 0; allowed_char<16; ++allowed_char){
            allowed_chars_array[allowed_char] = '0' + allowed_char;
    }

    allowed_chars_array[10] = '+';
    allowed_chars_array[11] = '-';
    allowed_chars_array[12] = '*';
    allowed_chars_array[13] = '/';
    allowed_chars_array[14] = '.';
    allowed_chars_array[15] = ',';

    //The idea is to check all the inputs in the formula, compared to a allowed characters array

    for (int char_index = 0; char_index < size_of_string; ++char_index){
        bool present = false;
        for (int allowed_char = 0; allowed_char<16; ++allowed_char){
            if (input_from_user[char_index] == allowed_chars_array[allowed_char]){
                present = true;
            }
        }
        if (present == false){
            std::cout << "You entered a non valid character (at least) which is " << input_from_user[char_index] << ". Only '+','-','*','/', ',', '.' and figures are allowed" << std::endl;
            return false;
        }

    }

    return true;

}


bool checkInput(std::string input_from_user){

    int size_of_string = input_from_user.size();

    remove_space(input_from_user, size_of_string);

    size_of_string = input_from_user.size();

    //Checking if the input is not empty
    if(is_input_empty(input_from_user, size_of_string) == false){
        return false;
    }

    if(start_with_operator(input_from_user) == false){
        return false;
    }

    if(end_with_operator(input_from_user, size_of_string) == false){
        return false;
    }

    //Now we are checking if all the input characters are corrects

    if(all_characters_are_valid(input_from_user,size_of_string) == false){
        return false;
    }

    //Here, the formula does not end or start with an operator (except + which will be treated after), there are no spaces and no forbidden characters
    return true;

}

int main(){

    std::string test = "89 + 1,. ";
    checkInput(test);

}
