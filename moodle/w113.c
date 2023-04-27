/**
* @Author Misoryan
* @Date 2023/04/27 14:34
*/
#include<stdio.h>

int f(int n) {
    return n <= 2 ? 1 : f(n - 1) + f(n - 2);
}

int main()
{
    int n ;
    for ( n = 1 ; n<=10 ; n=n+1 )
        printf("%d   ", f(n) ) ;
}