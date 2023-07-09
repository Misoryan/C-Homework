/**
* @Author Misoryan
* @Date 2023/06/01 15:28
*/
#include <stdio.h>
int t1(int x) {
    return x < 60;
}
int t2(int x) {
    return x >= 60;
}
int t3(int x) {
    return x >= 80;
}
void f( int a[ ] , int n , int(*t)(int) ) {
    for (int i = 0; i < n; ++i) {
        if (t(a[i])) {
            printf("%d ",a[i]);
        }
    }
}
int main( )
{
    int a[] = { 31,41,59,26,53,58,97,93,23,84,62,64,33,83,27,95,02,88 } ;
    f( a,18 , t1 ) ;  printf("\n-----\n") ;
    f( a,18 , t2 ) ;  printf("\n-----\n") ;
    f( a,18 , t3 ) ;  printf("\n-----\n") ;
}