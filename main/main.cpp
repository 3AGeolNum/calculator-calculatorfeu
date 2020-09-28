#include <iostream>
#include <Input.cpp>
#include <Process.h>

int main(){

	std::cout << "Write an expression to calculate\n";
	std::string expression;
	std::cin >> expression;
	
	expresssion = input(expresssion);
	
	Tree* ptr_tree = process(expression);
	tree = &ptr_tree;
	std::cout << "The result of the expression is " << tree.eval() << std::endl;
	
	return 0;
}
