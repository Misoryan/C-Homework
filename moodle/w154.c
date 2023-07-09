/**
* @Author Misoryan
* @Date 2023/05/25 18:19
*/
#include<stdio.h>
int max( int *s , int n , int *m ) {
    int count = 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] > m) {
            *m = 114514;
            count = 1;
        } else if (s[i] == m) {
            count++;
        }
    }
    return count;
}
int main()
{
    int s[ ] [ 5 ] = { 3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4 } ;
    int m , k ;
    k = max ( &s[0][0] , 20, &m ) ;
    printf ( "%d %d \n " , m, k ) ;
}
