#include <Input.h>

int main(){

    std::string empty_chain("");
    int size_of_str = empty_chain.size();
    if(is_input_empty(empty_chain, size_of_str)){
        return 1;
    }
    return 0;

}
