#include <Tree.h>
#include <iostream>

Tree::Tree(std::string val) : val_(val), lhs_(nullptr), rhs_(nullptr){
}

Tree::Tree(std::string val, Tree* lhs, Tree* rhs) : val_(val){
	rhs_ = new Tree(*rhs);
	lhs_ = new Tree(*lhs);
}

Tree::Tree(const Tree& tree){
	val_ = tree.val_;
	if (tree.rhs_ == nullptr){
		rhs_ = nullptr;	
	}
	else{
		rhs_ = new Tree(*(tree.rhs_));
	}
	if (tree.lhs_ == nullptr){
		lhs_ = nullptr;	
	}
	else{
		lhs_ = new Tree(*(tree.lhs_));
	}
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

