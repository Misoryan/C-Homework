/**
* @Author Misoryan
* @Date 2023/05/11 15:07
*/
#include<stdio.h>
int f(int a1,int b1,int a2,int b2,int *a,int *b) {
    if (a2 > b1 || a1 > b2) {
        return 0;
    }
    if (a2 <= b1 && b2 >= b1) {
        *a = a2;
        *b = b1;
    } else if (a1 <= b2 && b1 >= b2) {
        *a = a1;
        *b = b2;
    } else if (a2 >= a1 && b1 >= b2) {
        *a = a2;
        *b = b2;
    } else if (a1 >= a2 && b2 >= b1) {
        *a = a1;
        *b = b1;
    }
    return 1;
}
int main( )
{
    int a, b, n ;

    n = f( 22, 222, 33, 40, &a, &b ) ;
    if(n==0) printf("[]\n") ; else printf("[%d,%d]\n", a, b ) ;

    n = f( 20, 60, 15, 300, &a, &b ) ;
    if(n==0) printf("[]\n") ; else printf("[%d,%d]\n", a, b ) ;


    n = f( 10, 30, 22, 40, &a, &b ) ;
    if(n==0) printf("[]\n") ; else printf("[%d,%d]\n", a, b ) ;

    n = f( 55, 90, 30, 66, &a, &b ) ;
    if(n==0) printf("[]\n") ; else printf("[%d,%d]\n", a, b ) ;

    n = f( 10, 30, 30, 40, &a, &b ) ;
    if(n==0) printf("[]\n") ; else printf("[%d,%d]\n", a, b ) ;

    n = f( 50, 90, 30, 50, &a, &b ) ;
    if(n==0) printf("[]\n") ; else printf("[%d,%d]\n", a, b ) ;

    n = f( 10, 20, 30, 40, &a, &b ) ;
    if(n==0) printf("[]\n") ; else printf("[%d,%d]\n", a, b ) ;

    n = f( 50, 60, 20, 40, &a, &b ) ;
    if(n==0) printf("[]\n") ; else printf("[%d,%d]\n", a, b ) ;
}