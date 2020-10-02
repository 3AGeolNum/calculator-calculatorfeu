#include <Input.h>

int main(){

    std::string chain_multiply("*1+5-9");
    int size_multiply = chain_multiply.size();
    std::string chain_divide("/1+5-9");
    int size_divide = chain_divide.size();
    std::string chain_plus("+1+5-9");
    int size_plus = chain_plus.size();

    std::string ok_chain("1+5+9");
    int size_ok_chain = ok_chain.size();

    start_with_operator(chain_plus, size_plus);

    if(start_with_operator(chain_multiply, size_multiply) == true){
        return 1;
    }

    else if(start_with_operator(chain_divide, size_divide) == true){
        return 1;
    }


    else if(chain_plus != "1+5-9"){
        return 1;
    }

    else if(start_with_operator(ok_chain, size_ok_chain) == false){
        return 1;
    }

    return 0;

}
