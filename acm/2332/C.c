/**
* @Author Misoryan
* @Date 2023/03/20 10:07
*/
#include <stdio.h>

int main() {
    int a[20];
    int i = 0;
    do {
        scanf("%d",&a[i]);
        i++;
    } while (getchar() != '\n');
    for (int j = 0; j < i; ++j) {
        int flag = 0;
        for (int k = 0; k < j; ++k) {
            if (j != k && a[j] == a[k]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ",a[j]);
        }
    }
}