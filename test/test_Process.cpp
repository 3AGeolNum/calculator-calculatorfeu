#include <Process.h>
#include <iostream>

int main()
{
    // we are using preprocessed input
    std::string input1 = "3+5*%15*9+_10";
    Tree* ptr_tree1 = do_process( input1 );
    if( ptr_tree1->eval() != -4 )
    {
        std::cout << "Test of 3+5*%15*9+_10 (=-4) failed \n";
        return 1;
    }

    std::string input2 = "_1+5*9*%3";
    Tree* ptr_tree2 = do_process( input2 );
    if( ptr_tree2->eval() != 14 )
    {
        return 1;
    }

    return 0;
}