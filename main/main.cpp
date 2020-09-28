#include <iostream>
#include <Input.cpp>
#include <Process.h>

int main(){

	std::cout << "Write an expression to calculate\n";
	std::string expression;
	std::cin >> expression;
	
	expresssion = input(expresssion);
	
	Tree* ptr_tree = process(input);
	
	double result = &ptr_tree.eval();
	std::cout << "The result of the expression is " << result << endl;
	
	return 0;
}
