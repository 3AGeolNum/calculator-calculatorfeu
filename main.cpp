#include <iostream>
#include <Input.cpp>
#include <Process.h>

int main(){

	std::cout << "Write an expression to calculate\n";
	std::string expression;
	std::cin >> expression;
	
	expresssion = input(expresssion);
	
	Tree* tree = process(input);
	
	double result = tree.eval();
	std::cout << "The result of the expression is " << result << endl;
	
	return 0;
}
