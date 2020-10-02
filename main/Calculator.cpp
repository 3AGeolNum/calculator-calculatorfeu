#include <iostream>
#include <Input.h>
#include <Process.h>

int main()
{
    std::string expression;

    do
    {
        expression = getUserInput();
    } while( !check_and_format_Input( expression ) );

    Tree* ptr_tree = do_process( expression );
    std::cout << "Result: " << ptr_tree->eval() << std::endl;

    return 0;
}
