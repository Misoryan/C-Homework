/**
* @Author Misoryan
* @Date 2023/05/18 14:35
*/
#include<stdio.h>

int find ( int a[ ] , int n , int m ) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == m) {
            count++;
        }
    }
    return count;
}

int main()
{
    int a[ ] = { 3, 1, 4, 1, 5, 9 } ;
    int b[ ] = { 2, 7, 1, 8, 2, 8, 1, 8, 2, 8 } ;
    printf ( "%d \n" , find ( a, sizeof(a)/sizeof(a[0]) , 1 ) ) ;
    printf ( "%d \n" , find ( a, sizeof(a)/sizeof(a[0]) , 8 ) ) ;
    printf ( "%d \n" , find ( b, sizeof(b)/sizeof(b[0]) , 8 ) ) ;
}