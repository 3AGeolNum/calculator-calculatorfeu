#include <Tree.h>
#include <iostream>
#include <string>

int main()
{
    std::string trois = "3";
    Tree tree1 = Tree( trois, nullptr, nullptr );
    
    Tree tree2 = Tree("6");
    Tree* ptr_tree1 = &tree1;
    Tree* ptr_tree2 = &tree2;
    Tree tree3 = Tree("+", ptr_tree1, ptr_tree2);
    Tree tree4 = Tree("-", ptr_tree1, ptr_tree2);
    Tree tree5 = Tree("*", ptr_tree1, ptr_tree2);
    Tree tree6 = Tree("/", ptr_tree1, ptr_tree2);

    if (tree3.eval() != 9)
        return 1;

    else if (tree4.eval() != -3)
        return 1;

    else if (tree5.eval() != 18)
        return 1;

    else if (tree6.eval() != 0.5)
        return 1;

    return 0;
}
