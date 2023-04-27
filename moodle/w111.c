/**
* @Author Misoryan
* @Date 2023/04/27 14:27
*/
#include<stdio.h>
int m( int a, int b ) {  return  a<b ? a : b ;  }

int m3(int a,int b,int c) {
    return m(m(a,b),c);
}

int m4(int a,int b,int c,int d) {
    return m(m(a,b),m(c,d));
}

int main( )
{
    printf("%d ", m3(12,34,56) ) ;
    printf("%d ", m4(87,65,43,21) ) ;
}
