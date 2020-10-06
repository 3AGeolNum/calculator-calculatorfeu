#include <Input.h>
#include <string>

int main()
{

    std::string minus_str = "1-3*8";
    int size_of_str = 5;
    transform_minus(minus_str, size_of_str);
    if(minus_str == "1+_3*8" && size_of_str == 6){
        return 0;
    }
    return 1;

}
