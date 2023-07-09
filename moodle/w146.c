/**
* @Author Misoryan
* @Date 2023/05/18 15:20
*/
#include<stdio.h>
int f(int s[], int n) {
    int i = 0;
    while (n > 0) {
        s[i] = n % 10;
        i++;
        n = n / 10;
    }
    return i;
}

int main()
{
    int s[10] , i , n ;

    n = f ( s, 100 ) ;
    printf(" \n  %d : ", n ) ; for(i=n-1; i>=0 ; i=i-1 ) printf( "  %d  ",  s[ i ] ) ;

    n = f ( s, 23456 ) ;
    printf(" \n  %d : ", n ) ; for(i=n-1; i>=0 ; i=i-1 ) printf( "  %d  ",  s[ i ] ) ;

    n = f ( s, 2147483647 ) ;
    printf(" \n  %d : ", n ) ; for(i=n-1; i>=0 ; i=i-1 ) printf( "  %d  ",  s[ i ] ) ;
}