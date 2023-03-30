/**
* @Author Misoryan
* @Date 2023/03/23 13:46
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    int max;
    int index = 0;
    for (int i = 0; i < n; ++i) {
        max = 0;
        for (int j = i; j < n; ++j) {
            if (a[j] >= max) {
                max = a[j];
                index = j;
            }
        }
        a[index] = a[i];
        a[i] = max;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
}