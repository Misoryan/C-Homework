/**
* @Author Misoryan
* @Date 2023/04/20 14:31
*/
#include <stdio.h>
float my_sqrt(float a) {
    float result = 1;
    for (int i = 0; i < 10; ++i) {
        result = (result + (a / result)) * 0.5;
    }
    return result;
}
int main()
{
    printf( "%.4f  \n" , my_sqrt(2) );
    printf( "%.4f  \n" , my_sqrt(3) );
    printf( "%.4f  \n" , my_sqrt(5) );
    printf( "%.4f  \n" , my_sqrt(10) );
}