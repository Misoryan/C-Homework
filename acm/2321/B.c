/**
* @Author Misoryan
* @Date 2023/03/14 19:18
*/
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < (n - i + 1); ++j) {
            int k = n - i - j;
            if (5 * i + 3 * j + k/3.0 == m) {
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
}