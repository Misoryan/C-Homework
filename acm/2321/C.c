/**
* @Author Misoryan
* @Date 2023/03/14 19:28
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%d=1",n);
    for (int i = 1; i < n; ++i) {
        while (n % (i + 1) == 0 && n != 1) {
            printf("*%d",i + 1);
            n = n / (i + 1);
        }
    }
}
