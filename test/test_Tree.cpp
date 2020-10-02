#include <Tree.h>
#include <iostream>
#include <string>

int main()
{
    Tree tree1 = Tree( "3" );

    Tree tree2 = Tree( "6" );

    Tree tree3 = Tree( "_8" );

    Tree tree4 = Tree( "%6" );

    Tree* ptr_tree1 = &tree1;
    Tree* ptr_tree2 = &tree2;
    Tree* ptr_tree3 = &tree3;
    Tree* ptr_tree4 = &tree4;

    Tree tree5( "+", ptr_tree1, ptr_tree2 );
    Tree tree6( "+", ptr_tree1, ptr_tree3 );
    Tree tree7( "*", ptr_tree1, ptr_tree2 );
    Tree tree8( "*", ptr_tree1, ptr_tree4 );
    if( tree3.eval() != -8 )
    {
        return 1;
    }
    else if( tree5.eval() != 9 )
    {
        return 1;
    }
    else if( tree6.eval() != -5 )
    {
        return 1;
    }
    else if( tree7.eval() != 18 )
    {
        return 1;
    }
    else if( tree8.eval() != 0.5 )
    {
        return 1;
    }
    return 0;
}
