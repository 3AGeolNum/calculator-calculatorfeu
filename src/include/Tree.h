#pragma once
#include <string>

class Tree{
	public:
		Tree(std::string val, Tree* lhs = nullptr, Tree* rhs = nullptr);
		~Tree();
		double eval();

	private:
		Tree* lhs_;
		Tree* rhs_;
		std::string val_;
};
