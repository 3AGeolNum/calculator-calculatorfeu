#include <Input.h>
#include <string>

int main()
{

    std::string underscore_str = "1+__2";
    int size_of_str = 5;
    remove_following_underscore(underscore_str, size_of_str);
    if(underscore_str == "1+2" && size_of_str == 3){
        return 0;
    }
    return 1;

}
