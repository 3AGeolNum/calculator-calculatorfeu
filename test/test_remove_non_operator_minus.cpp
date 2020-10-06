#include <Input.h>
#include <string>

int main()
{
    std::string minus_str = "-2---3";
    int size_of_str = minus_str.size();
    replace_non_operator_minus( minus_str, size_of_str );
    if( minus_str == "_2-3" && size_of_str == 4 )
    {
        return 0;
    }
    return 1;
}
