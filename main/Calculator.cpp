#include <Input.cpp>
#include <Process.h>
#include <iostream>

int main()
{
    std::string expression;

    expression = getUserInput( expression );
    while( !checkInput( expression ) )
    {
        expression = getUserInput( expression );
    }

    Tree* ptr_tree = do_process( expression );
    Tree tree = &ptr_tree;
    std::cout << "Result: " << tree.eval() << std::endl;

    return 0;
}
