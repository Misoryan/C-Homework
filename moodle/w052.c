/**
* @Author Misoryan
* @Date 2023/03/16 14:36
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[n-i-1]);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[n-i-1]);
    }
}
