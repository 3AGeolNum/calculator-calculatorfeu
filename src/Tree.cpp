#include <Tree.h>
#include <iostream>

Tree::Tree(std::string val) : val_(val), lhs_(nullptr), rhs_(nullptr){
}

Tree::Tree(std::string val, Tree*& lhs, Tree*& rhs) : val_(val), lhs_(lhs), rhs_(rhs){
}

Tree::~Tree(){

}

double Tree::eval(){
	if (lhs_ == nullptr && rhs_ == nullptr){
		double value = std::stod(val_);
		return value;
	}
	else {
		double lhsval = lhs_->eval();
		double rhsval = rhs_->eval();
		char op = val_.c_str()[0];
		switch(op){
				case '+':
					return lhsval + rhsval;
				case '-':
					return lhsval - rhsval;
				case '*':
					return lhsval * rhsval;
				case '/':
					return lhsval / rhsval;
				default:
					break;
		}
	}
}

