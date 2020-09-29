#include <Process.h>

int test_formation(){
	std::string input1 = "3+5"; //testing the formation of an additive Tree
	Tree* tree1 = doProcess(input1);

	std::string input2 = "3-5"; //testing the formation of a substractive Tree
        Tree* tree2 = doProcess(input2);
        
	std::string input3 = "3*5"; //testing the formation of a multiplicative Tree
        Tree* tree3 = doProcess(input3);
        
	std::string input4 = "3/5"; //testing the formation of a divisive Tree
        Tree* tree4 = doProcess(input4);
	
	return 0;
}
