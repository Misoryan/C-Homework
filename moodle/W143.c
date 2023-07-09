/**
* @Author Misoryan
* @Date 2023/05/18 14:39
*/
#include<stdio.h>
int dp ( int a[ ] , int b[ ] , int n ) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        count += a[i] * b[i];
    }
    return count;
}
int main()
{
    int a[ ] = { 1, 2, 3, 4, 5 } ;
    int b[ ] = { 1, 2, 3, 4, 5 } ;

    printf ( "%d \n" , dp ( a, b , 4 ) ) ;
    printf ( "%d \n" , dp ( a, b , 5 ) ) ;
}