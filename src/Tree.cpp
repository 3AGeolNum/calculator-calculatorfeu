#include <Tree.h>
#include <assert.h>
#include <iostream>
#include <string>

Tree::Tree( std::string val ) : val_( val ), lhs_( nullptr ), rhs_( nullptr ) {}

Tree::Tree( std::string val, Tree* lhs, Tree* rhs ) : val_( val )
{
    rhs_ = new Tree( *rhs );
    lhs_ = new Tree( *lhs );
}

Tree::Tree( const Tree& tree )
{
    val_ = tree.val_;
    if( tree.rhs_ == nullptr )
    {
        rhs_ = nullptr;
    }
    else
    {
        rhs_ = new Tree( *( tree.rhs_ ) );
    }
    if( tree.lhs_ == nullptr )
    {
        lhs_ = nullptr;
    }
    else
    {
        lhs_ = new Tree( *( tree.lhs_ ) );
    }
}

Tree::~Tree()
{
    if( lhs_ != nullptr )
    {
        delete lhs_;
    }
    if( rhs_ != nullptr )
    {
        delete rhs_;
    }
}

double Tree::eval()
{
    if( lhs_ == nullptr && rhs_ == nullptr )
    {
        // if it is a termination of the tree
        // check if there is a substraction or a division and alter the value
        // accordingly
        bool divide = convert_divide();
        convert_negative();
        double value = std::stod( val_ );
        if( divide && value == 0 )
        {
            throw std::string( "Error division by 0" );
        }
        else
        {
            return ( divide ) ? 1 / value : value;
        }
    }
    else
    {
        // recursive call of the eval function on the different branch of the
        // tree

		assert(lhs_ != nullptr && rhs_ != nullptr);

        double lhsval = lhs_->eval();
        double rhsval = rhs_->eval();
        char op = val_.c_str()[0];
        // treat the different cases. the other operator have been preprocessed
        // in order
        if( op == '+' )
        {
            return lhsval + rhsval;
        }
        else if( op == '*' )
        {
            return lhsval * rhsval;
        }
        throw std::string( "Unknown sign" );
    }
}

void Tree::convert_negative()
{
    // allow to change the string before converting it to a double
    if( val_[0] == '_' )
    {
        val_[0] = '-';
    }
}

bool Tree::convert_divide()
{
    // change the val if there is a division indicator and return a boolean in
    // that case
    bool divide = false;
    if( val_[0] == '%' )
    {
        val_ = std::string( val_, 1 );
        divide = true;
    }
    return divide;
}
