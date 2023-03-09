#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        if ((i + 1) != 1 && (i+1) != n && n % (i+1) == 0) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}