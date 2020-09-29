#include <Process.cpp>

int test_formation(){
	std::string input1 = "3+5"; //testing the formation of an additive Tree
	Tree* tree1 = process(input1);

	std::string input2 = "3-5"; //testing the formation of a substractive Tree
        Tree* tree2 = process(input2);
        
	std::string input3 = "3*5"; //testing the formation of a multiplicative Tree
        Tree* tree3 = process(input3);
        
	std::string input4 = "3/5"; //testing the formation of a divisive Tree
        Tree* tree4 = process(input4);
	
	return 1;
}

int test_priorities(){
	std::string input = "3+5*2-9-1/5";
	Tree* tree = process(input);
        while( tree.lhs_ != nullptr ){
		assert( tree.rhs_ != nullptr );
		
		}
	return 1;	
}
