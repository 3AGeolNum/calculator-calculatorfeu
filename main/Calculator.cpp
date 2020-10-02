#include <Input.h>
#include <Process.h>

int main()
{
    std::string expression;

    expression = getUserInput( expression );
    while( !checkInput( expression ) )
    {
        expression = getUserInput( expression );
    }

    Tree* ptr_tree = do_process( expression );
    std::cout << "Result: " << ptr_tree->eval() << std::endl;

    return 0;
}
