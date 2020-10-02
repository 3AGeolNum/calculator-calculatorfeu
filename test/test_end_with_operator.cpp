#include <Input.h>

int main(){

    std::string chain_multiply("1+5-9*");
    int size_multiply = chain_multiply.size();
    std::string chain_divide("1+5-9/");
    int size_divide = chain_divide.size();
    std::string chain_plus("1+5-9+");
    int size_plus = chain_plus.size();
    std::string chain_minus("1+5-9-");
    int size_minus = chain_minus.size();

    std::string ok_chain("1+5+9");
    int size_ok_chain = ok_chain.size();

    if(end_with_operator(chain_multiply, size_multiply) == true){
        return 1;
    }

    else if(end_with_operator(chain_divide, size_divide) == true){
        return 1;
    }

    else if(end_with_operator(chain_plus, size_plus) == true){
        return 1;
    }

    else if(end_with_operator(chain_minus, size_minus) == true){
        return 1;
    }

    else if(end_with_operator(ok_chain, size_ok_chain) == false){
        return 1;
    }

    return 0;

}

