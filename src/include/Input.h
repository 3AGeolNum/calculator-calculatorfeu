#include <string>

// This function allows to get the original input of the user
std::string getUserInput();

// It removes all the spaces in the calculation
void remove_space( std::string &string_with_spaces, const int &size_of_string );

// It checks if the string is empty or not after removing the strings
bool is_input_empty( const std::string &input_from_user, const int &size_of_string );

// Checking if the calculation begins with a '+', a '*' or a '/'
bool start_with_operator( std::string &input_from_user, int &size_of_string );

// Checking if the calculation ends with a '*', a '/', a '+' or a '-'
bool end_with_operator( const std::string &input_from_user, const int &size_of_string );

// Checking if the characters are allowed
bool all_characters_are_valid( const std::string &input_from_user, const int &size_of_string );

// Checking if there are not two successive operator (except if there is a '-'
// in second position
bool no_successive_operators( const std::string &input_from_user, const int &size_of_string );

// It replaces all the commas by points in order to be standard
void replace_comma_by_point( std::string &input_from_user, const int &size_of_string );

//It removes '--' at the beginning
void remove_two_minus_beginning(std::string &input_from_user, int &size_of_string);

// It replaces a non-operator '-' by an '_', replaces a '-' operator by a '+_' and a divide by '%' --> to be cleaned and separated
void replace_operator_minus_divide(
    std::string &input_from_user, int &size_of_string );

void transform_minus(std::string &input_from_user, int &size_of_string);

void transform_divide(std::string &input_from_user, int &size_of_string);

void remove_following_underscore(std::string &input_from_user, int &size_of_string);

// This function transforms a .5 into a 0.5
void add_zero_before_alone_point(
    std::string &input_from_user, int &size_of_string );

// This function transforms a 5 into a 5.0
void add_zero_after_alone_point(
    std::string &input_from_user, int &size_of_string );

bool two_dots_before_operator(std::string &input_from_user, int &size_of_string );

bool check_and_format_Input( std::string &input_from_user );
