#include <Input.h>
#include <string>

int main()
{
    std::string divide_str = "1/3*8";
    int size_of_str = 5;
    transform_divide( divide_str, size_of_str );
    if( divide_str == "1*%3*8" && size_of_str == 6 )
    {
        return 0;
    }
    return 1;
}
