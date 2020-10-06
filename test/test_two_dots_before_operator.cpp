#include <Input.h>
#include <string>

int main()
{

    std::string two_points_str = "1+0.0.0+5";
    int size_of_str = two_points_str.size();
    if(two_dots_before_operator(two_points_str, size_of_str) == false){
        return 0;
    }
    return 1;


}
