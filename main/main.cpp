#include <iostream>
#include <Input.cpp>
#include <Process.h>

int main(){
	std::string expression;
	
	expression = getUserInput(expression);
	while( !checkInput(expression) ){
		expression = getUserInput(expression);
	}
	
	Tree* ptr_tree = doProcess(expression);
	Tree tree = &ptr_tree;
	std::cout << "Result: " << tree.eval() << std::endl;
	
	return 0;
}
