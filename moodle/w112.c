/**
* @Author Misoryan
* @Date 2023/04/27 14:30
*/
#include<stdio.h>

int df(int n) {
    if (n - 2 <= 2) {
        return n * (n - 2);
    } else {
        return n * df(n - 2);
    }
}

int main( )
{
    printf("%d ", df(18) ) ;
    printf("%d ", df(19) ) ;
}
