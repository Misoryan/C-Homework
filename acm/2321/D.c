/**
* @Author Misoryan
* @Date 2023/03/14 19:33
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d=", n);
    int tag = 0;
    for (int i = 1; i < n; ++i) {
        while (n % (i + 1) == 0 && n != 1) {
            if (tag == 0) {
                printf("%d", i + 1);
                tag = 1;
            } else {
                printf("*%d", i + 1);
            }
            n = n / (i + 1);
        }
    }
}