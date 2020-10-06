#include <Input.h>
#include <Process.h>
#include <iostream>

#ifdef _WIN32
#include <Lmcons.h>
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32

    // USEFUL EASTER EGG

    char username[UNLEN + 1];
    DWORD username_len = UNLEN + 1;
    GetUserName( username, &username_len );
    std::string user = std::string( username );

    if( !user.rfind( "caumon", 0 ) )
    {
        std::cout << "[CRITICAL ERROR]" << std::endl;
        std::cout << "SORRY, YOU ARE NOT ALLOWED TO RUN THIS PROGRAM."
                  << std::endl;
        std::cout << "After a team survey, the statistical data have shown "
                     "that the likelihood of you breaking me is too high for "
                     "me to dare take up the risk of allowing you that."
                  << std::endl;
        std::cout << "Sincerely yours, Fire Calculator." << std::endl;
        std::cin.get();
    }
#endif

    std::string expression;

    do
    {
        expression = getUserInput();
    } while( !check_and_format_Input( expression ) );

    Tree* ptr_tree = do_process( expression );
    try
    {
        std::cout << "Result: " << ptr_tree->eval() << std::endl;
    }
    catch( std::string const& chaine )
    {
        std::cout << chaine << std::endl;
    }

    return 0;
}
