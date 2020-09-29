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

    expression = DoPreprocess( expression );

    Tree* ptr_tree = process( expression );
    Tree tree = &ptr_tree;
    std::cout << "Result: " << tree.eval() << std::endl;

    return 0;
}
