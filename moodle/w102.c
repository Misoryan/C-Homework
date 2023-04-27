/**
* @Author Misoryan
* @Date 2023/04/20 13:32
*/

#include<stdio.h>

int prime(int n) {
    for (int i = 0; i < n; ++i) {
        if (n % (i+1) == 0 && (i+1) != 1 && (i+1) != n) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    for ( n = 2 ; n<=10 ; n=n+1 )
    {
        if ( prime(n) )  printf("YES\n") ;
        else   printf("NO\n") ;
    }
}
