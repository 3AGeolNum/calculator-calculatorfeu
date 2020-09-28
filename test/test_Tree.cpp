#include <Tree.h>
#include <iostream>
#include <string>

int main(){
	
	Tree tree1("3");
	
	Tree tree2("6");
	Tree* ptr_tree1 = &tree1;

	Tree* ptr_tree2 = &tree2;
	Tree tree3("+", ptr_tree1, ptr_tree2);

	if (true){
		Tree tree1bis("3");
	
		Tree tree2bis("6");
		Tree* ptr_tree1bis = &tree1bis;

		Tree* ptr_tree2bis = &tree2bis;
		tree3 = Tree("+", ptr_tree1bis, ptr_tree2bis);
		}

	Tree tree4("-", ptr_tree1, ptr_tree2);
	Tree tree5("*", ptr_tree1, ptr_tree2);
	Tree tree6("/", ptr_tree1, ptr_tree2);
	std::cout << tree3.eval() << std::endl;
	if (tree3.eval() != 9) {
		return 1;
	}
	else if( tree4.eval() != -3){
		return 1;
	}
	else if (tree5.eval() != 18) {
		return 1;
	}
	else if (tree6.eval() != 0.5) {
		return 1;
	}

	return 0;
}
