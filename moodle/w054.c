/**
* @Author Misoryan
* @Date 2023/03/16 14:50
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[2*n];
    for (int i = 0; i < 2*n; ++i) {
        scanf("%d",&a[i]);
    }
    printf("{ ");
    for (int i = 0; i < 2*n; ++i) {
        if (i == 2 * n - 1) {
            printf("%d",a[i]);
        } else {
            printf("%d, ", a[i]);
        }
    }
    printf(" }");
}
