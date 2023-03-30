/**
* @Author Misoryan
* @Date 2023/03/21 20:19
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    int search,founded;
    scanf("%d",&search);
    founded = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == search) {
            founded = 1;
            break;
        }
    }
    printf(founded == 1 ? "Yes" : "No");
}
