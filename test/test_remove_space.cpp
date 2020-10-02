#include <Input.h>

int main(){

    std::string chain_with_spaces("1 + 2 * 8  1");
    int size_of_str = chain_with_spaces.size();

    remove_space(chain_with_spaces, size_of_str);

    std::string chain_without_spaces("1+2*81");

    if(chain_with_spaces == chain_without_spaces){
        return 0;
    }
    return 1;

}
