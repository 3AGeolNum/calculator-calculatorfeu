#include <Process.h>

int main()
{
    std::string input1 = "3+5/15*9-10";
    Tree* ptr_tree1 = doProcess( input1 );
    if( ptr_tree1->eval() != -4 )
    {
        return 1;
    }

    std::string input2 = "_1+5*9/3";
    Tree* ptr_tree2 = doProcess( input2 );
    if( ptr_tree1->eval() != 14 )
    {
        return 1;
    }

    return 0;
}
