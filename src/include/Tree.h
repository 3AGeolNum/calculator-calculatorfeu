#pragma once

class Tree{
	public:
		Tree(char val, Tree lhs = nullptr, Tree rhs = nullptr);
		~Tree();
		int eval();

	private:
		Tree* lhs_;
		Tree* rhs_;
		char val_;
};
