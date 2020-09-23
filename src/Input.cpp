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

