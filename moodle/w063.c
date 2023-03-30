/**
* @Author Misoryan
* @Date 2023/03/23 15:09
*/

#include <stdio.h>

int main() {
    int n, i, j;
    int arr[30][30];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
