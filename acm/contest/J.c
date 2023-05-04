/**
* @Author Misoryan
* @Date 2023/05/04 20:30
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int k = 9;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            printf("%d",k);
            k--;
            if (k < 0) {
                k = 9;
            }
        }
        printf("\n");
    }
}
