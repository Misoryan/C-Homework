/**
* @Author Misoryan
* @Date 2023/03/09 14:59
*/
#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    // a/b + c/d = ad/bd + bc/bd = (ad+bc)/bd
    int m = a*d + b*c;
    int n = b*d;
    int min = 1;
    for (int i = 0; i < (m > n ? m : n); ++i) {
        if (m % (i + 1) == 0 && n % (i + 1) == 0) {
            min = i + 1;
        }
    }
    m = m / min;
    n = n / min;
    printf("%d %d",m,n);
}
