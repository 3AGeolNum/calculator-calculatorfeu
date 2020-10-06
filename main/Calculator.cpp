#include <Input.h>
#include <Process.h>
#include <iostream>

int main()
{
    std::string expression;

    do
    {
        expression = getUserInput();
    } while( !check_and_format_Input( expression ) );

    Tree* ptr_tree = do_process( expression );
	try{
    	std::cout << "Result: " << ptr_tree->eval() << std::endl;
	}
	catch(std::string const& chaine){
		std::cout << chaine << std::endl;
	}

    return 0;
}
