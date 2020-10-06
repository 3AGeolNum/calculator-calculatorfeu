#include <Input.h>
#include <string>

int main()
{
    std::string test_array[12];
    test_array[0] = "1++1";
    test_array[1] = "1+/1";
    test_array[2] = "1+*1";
    test_array[3] = "1-+1";
    test_array[4] = "1-/1";
    test_array[5] = "1-*1";
    test_array[6] = "1/+1";
    test_array[7] = "1//1";
    test_array[8] = "1/*1";
    test_array[9] = "1*+1";
    test_array[10] = "1*/1";
    test_array[11] = "1**1";
    int size_of_str = 4;

    for( int i = 0; i < 12; i++ )
    {
        if( no_successive_operators( test_array[i], size_of_str ) == true )
        {
            return 1;
        }
    }

    return 0;
}
