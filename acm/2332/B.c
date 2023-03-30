/**
* @Author Misoryan
* @Date 2023/03/21 20:32
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    int total;
    float average;
    for (int i = 0; i < n; ++i) {
        total += a[i];
    }
    average = total * 1.0 / n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < average) {
            count = count + 1;
        }
    }
    printf("%d",count);
    for (int i = 0; i < n; ++i) {
        if (a[i] < average) {
            printf(" %d",a[i]);
        }
    }
}
