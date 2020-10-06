
#include <Input.h>
#include <string>

int main()
{

    std::string two_minus = "--5+6";
    int size_of_str = 5;
    remove_two_minus_beginning(two_minus, size_of_str);
    if(two_minus == "5+6" && size_of_str == 3){
        return 0;
    }
    return 1;

}
