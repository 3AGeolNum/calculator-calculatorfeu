#include <Input.h>
#include <string>

int main()
{
    std::string point_zero = "5.+6.*9.";
    int size_of_str = point_zero.size();
    add_zero_after_alone_point( point_zero, size_of_str );
    if( point_zero == "5.0+6.0*9.0" && size_of_str == 11 )
    {
        return 0;
    }
    return 1;
}
