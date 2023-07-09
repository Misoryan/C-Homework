/**
* @Author Misoryan
* @Date 2023/05/18 14:37
*/
#include<stdio.h>
#include<math.h>
int f ( int a[ ] , int n , int x ) {
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += a[i] * pow(x,i);
    }
    return total;
}
int main()
{
    int a[ ] = { -6, 3, -4, 2 } ;
    printf ( "%d \n" , f ( a, sizeof(a)/sizeof(a[0]) , 2 ) ) ;
    printf ( "%d \n" , f ( a, 2 , 6 ) ) ;
}