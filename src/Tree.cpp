#include <Tree.h>
#include <string>


Tree::Tree(string val, Tree* lhs = nullptr, Tree* rhs = nullptr) : val_(val) lhs_(lhs), rhs_(rhs){
}

Tree::~Tree(){
	delete lhs;
	delete rhs;
}

double Tree::eval(){
	if (lhs == nullptr && rhs == nullptr)
		return (double) val;

	else:
		double lhs = lhs->eval();
		double rhsval = rhs->eval();

		switch val_:
				case "+":
					return lhs + rhs;
				case "-":
					return lhs - rhs;
				case "*":
					return lhs * rhs;
				case "/":
					return lhs / rhs;
				default:
					break;
	}
}

