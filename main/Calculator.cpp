#include <Input.h>
#include <Process.h>
#include <Tree.h>
#include <iostream>

int main()
{
    std::string expression;

    do
    {
        expression = getUserInput();
    } while( !check_and_format_Input( expression ) );

    Tree* ptr_tree = doProcess( expression );
    Tree tree = *ptr_tree;
    std::cout << "Result: " << tree.eval() << std::endl;

    return 0;
}
