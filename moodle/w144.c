/**
* @Author Misoryan
* @Date 2023/05/18 14:41
*/
#include<stdio.h>
void f ( int a[ ] , int n ) {
    for (int i = 0; i < n; ++i) {
        if (i > 0 && a[i] > 0) {
            printf("+");
        }
        printf("%d",a[i]);
        if (i > 0) {
            printf("*x");
        }
        if (i > 1) {
            printf("^%d",i);
        }
    }
    printf("\n");
}

        int main ( )
{
    int a[ ] = { -6, 3, -4, 2 } ;
    int b[ ] = { 60, -30, 40, -20, 10 } ;
    f ( a, 4 ) ;
    f ( b, 5 ) ;
}
