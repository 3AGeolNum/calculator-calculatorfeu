#include <Process.h>

int test_formation(){
	std::string input1 = "3+5/15*9-10";
	Tree* ptr_tree1 = doProcess(input1);
	if (ptr_tree1->eval() != -4) {
		return 1;
	}

	return 0;
}