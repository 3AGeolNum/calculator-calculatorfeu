#pragma once
#include <string>

class Tree{
	public:
		Tree(std::string val);
		Tree(std::string val, Tree* lhs, Tree* rhs);
		~Tree();
		double eval();

	private:
		Tree(const Tree& tree);
		Tree* lhs_;
		Tree* rhs_;
		std::string val_;
};
