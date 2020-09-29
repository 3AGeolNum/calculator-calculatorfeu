#pragma once

#include <Tree.h>
#include <string>

Tree* process( std::string input )
{
    std::string ops[4] = { "+", "-", "*", "/" };

    /*

    See later

    // looking for an operator in the following order :  +, -, *, /
    for( std::string::iterator it_op = ops.begin(); it_op != ops.end(); ++it_op
    ){

        // going through the string to find the operators
            for( std::string::iterator it = input.begin(); it != input.end();
    ++it ){

            if( ops[it_op] == input[it] ){
                //found an operator: cutting the string and creating a new Tree
                std::string lhs = string(input.begin(), input.begin()+it-1);
                std::string rhs = string(input.begin()+it+1, input.end()-1);
                std::string op = ops[it_op];

                return new Tree( op, process(lhs), process(rhs) ); //recursive
    call
                        }
        }

    */
    // if no operator was found:
    return new Tree( input ); // no need to say the ptrs are nullptr: value by
                              // default in Tree()
}
