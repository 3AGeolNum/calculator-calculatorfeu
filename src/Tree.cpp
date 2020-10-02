#include <Tree.h>
#include <iostream>
#include <string>

Tree::Tree( std::string val ) : val_( val ), lhs_( nullptr ), rhs_( nullptr )
{
    convertNegative();
}

Tree::Tree( std::string val, Tree* lhs, Tree* rhs ) : val_( val )
{
    convertNegative();
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
    std::cout << "DESTRUCTOR " << this << std::endl;

    if( lhs_ != nullptr )
    {
        std::cout << "LHS NOT NULL for " << this << std::endl;

        delete lhs_;
    }
    if( rhs_ != nullptr )
    {
        std::cout << "RHS NOT NULL for " << this << std::endl;
        delete rhs_;
    }
}

double Tree::eval()
{
    if( lhs_ == nullptr && rhs_ == nullptr )
    {
        bool divide = false;
        if(val_[0] == '%') {

            divide = true;
            val_ = std::string(val_, 1);
        }

        double value = std::stod( val_ );

        return (divide) ? 1/value : value;
    }
    else
    {
        double lhsval = lhs_->eval();
        double rhsval = rhs_->eval();
        char op = val_.c_str()[0];
        switch( op )
        {
        case '+':
            return lhsval + rhsval;
        case '-':
            return lhsval - rhsval;
        case '*':
            return lhsval * rhsval;
        case '/':
            return lhsval / rhsval;
        default:
            return 0; // TODO
            break;
        }
    }
}

void Tree::convertNegative()
{
    if( val_[0] == '_' )
    {
        val_[0] = '-';
    }
}
