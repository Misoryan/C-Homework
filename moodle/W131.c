/**
* @Author Misoryan
* @Date 2023/05/11 14:42
*/
#include <stdio.h>

#include<stdio.h>
void f( int a, int b, int c, int *s, int *v ) {
    *s = 2*a*b+2*b*c+2*a*c;
    *v = a*b*c;
}
int main( )
{
    int s, v ;
    f( 1, 2, 3, &s, &v ) ;
    printf( "%d %d\n", s, v ) ;
    f( 2, 3, 4, &s, &v ) ;
    printf( "%d %d\n", s, v ) ;
}