#include <iostream>
#include <string>

std::string getUserInput(){

    std::string input_from_user = "";
    std::cout << "Please enter your calculation (only with +,-,*,/ and figures)" << std::endl;
    std::cin >> input_from_user;
    std::cout << "You chose the calculation " << input_from_user << std::endl;
    return input_from_user;

}

