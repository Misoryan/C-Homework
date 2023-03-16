/**
* @Author Misoryan
* @Date 2023/03/16 14:39
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    long total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += a[i];
    }
    float average = total * 1.0 / n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < average) {
            count++;
        }
    }
    printf("%d ",count);
}
