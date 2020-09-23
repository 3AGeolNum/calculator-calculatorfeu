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

void remove_space(std::string &string_with_spaces){

    std::string str_without_spaces;
    int size_of_string = string_with_spaces.size();
    const char* space = " ";
    for (int i=0; i<size_of_string; ++i){

        if (string_with_spaces[i] != *space){
            str_without_spaces.push_back(string_with_spaces[i]);
        }

    }

    string_with_spaces = str_without_spaces;

}

bool checkInput(std::string input_from_user){

    remove_space(input_from_user);

    int size_of_string = input_from_user.size();

    //Checking if the input is not empty

    if (size_of_string == 0){
        std::cout << "Error : your calculation is empty : please enter a calculation" << std::endl;
        return false;
    }

    //Checking if the calculation begins with a '+', a '*' or a '/'
    const char* multiply = "*";
    const char* divide = "/";
    const char* pluss = "+";
    const char* minuss = "-";

    if (input_from_user[0] == *pluss || input_from_user[0] == *multiply || input_from_user[0] == *divide){
        std::cout << "Error : you put a '+', a '*' or a '/' at the beginning of the calculation" << std::endl;
        return false;
    }


    //Checking if the calculation ends with a '+', a '*' or a '/'
    if (input_from_user[size_of_string -1] == *pluss || input_from_user[size_of_string -1] == *multiply || input_from_user[size_of_string -1] == *divide || input_from_user[size_of_string -1] == *minuss){
        std::cout << "Error : you put a '+', a '*' or a '/' at the end of the calculation" << std::endl;
        return false;
    }

    //Now we are checking if all the input characters are corrects

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
            std::cout << "You entered a non valid character which is " << input_from_user[char_index] << ". Only '+','-','*','/', ',', '.' and figures are allowed" << std::endl;
            return false;
        }

    }

    //Here, the formula does not end or start with an operator, there are no spaces and no forbidden characters
    return true;

}

int main(){

    std::string test = "-89 + &1 ";
    checkInput(test);

}
