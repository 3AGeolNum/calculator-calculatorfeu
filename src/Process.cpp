#pragma once

#include <Tree.h>
#include <string>

Tree* process(std::string input){
        std::string operators[4] = {"+", "-","*", "/"};
	// looking for an operator in the following order :  +, -, *, /
	for( std::string::iterator iter_op = operators.begin(); iter_op != operators.end(); ++iter_op ){
                        
		// going through the string to find the operators
        	for( std::string::iterator iter = input.begin(); iter != input.end(); ++iter ){

			if( ops[iter_op] == input[iter] ){
				//found an operator: cutting the string while omitting the operator and creating a new Tree
				std::string lhs = std::string(input.begin(), input.begin()+iter);
				std::string op = std::string(input.begin()+iter, input.begin()+iter+1);	
				std::string rhs = std::string(input.begin()+iter+1, input.end());
				
				return new Tree( op, process(lhs), process(rhs) ); //recursive call
                        }
		}
	// if no operator was found:
	return new Tree( input ); //no need to say the ptrs are nullptr: value by default in Tree()
}
