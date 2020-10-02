#include <Process.h>

Tree* do_process( std::string input )
{
    std::string operators = "+-*/";

    // looking for +, -, *, / in that order :
    for( int iter_op = 0; iter_op < 4; ++iter_op )
    {
        // going through the string to find the operators
        for( int iter = 0; iter < input.size(); ++iter )
        {
            if( operators[iter_op] == input[iter] )
            {
                // found an operator: cutting the string while omitting the
                // operator and creating a new Tree
                std::string lhs = std::string( input, 0, iter );
                std::string op = std::string( input, iter, 1 );
                std::string rhs = std::string( input, iter + 1 );

                return new Tree(
                    op, do_process( lhs ), do_process( rhs ) ); // recursive call
            }
        }
    }

    // if no operator was found:
    return new Tree( input ); // no need to say the ptrs are nullptr: value by
                              // default in Tree()
}