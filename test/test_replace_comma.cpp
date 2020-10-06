
#include <Input.h>
#include <string>

int main()
{
    std::string str_comma = "2,5+6,3";
    int size_of_str = str_comma.size();
    replace_comma_by_point(str_comma, size_of_str);
    if(str_comma == "2.5+6.3"){
        return 0;
    }
    return 1;
}
