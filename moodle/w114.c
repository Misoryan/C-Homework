/**
* @Author Misoryan
* @Date 2023/04/27 14:35
*/
#include<stdio.h>

int out(int n) {
    printf("%d\n",n % 10);
    if (n <= 10) {
        return n;
    } else {
        return out(n / 10);
    }
}
int main()
{
    out ( 123456789 ) ;
}
