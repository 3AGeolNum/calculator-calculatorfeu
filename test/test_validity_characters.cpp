#include <Input.h>

int main()
{
    std::string bad_input_chain( "=15+551+1" );
    int size_bad_input = bad_input_chain.size();

    std::string bad_input_chain2( "15x+551+1" );
    int size_bad_input2 = bad_input_chain2.size();

    std::string ok_chain( "1+5+9" );
    int size_ok_chain = ok_chain.size();

    if( all_characters_are_valid( bad_input_chain, size_bad_input ) == true )
    {
        return 1;
    }

    else if( all_characters_are_valid( bad_input_chain2, size_bad_input2 )
             == true )
    {
        return 1;
    }

    else if( all_characters_are_valid( ok_chain, size_ok_chain ) == false )
    {
        return 1;
    }

    return 0;
}
