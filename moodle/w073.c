/**
* @Author Misoryan
* @Date 2023/03/30 14:09
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    char c[n][10];
    for (int i = 0; i < n + 1; ++i) {
        gets(c[i]);
    }
    for (int i = 1; i < n + 1; ++i) {
        int index = i;
        char max[10];
        strcpy(max,c[i]);
        for (int j = i; j < n + 1; ++j) {
            if (strcmp(c[j],max) < 0) {
                index = j;
                strcpy(max,c[j]);
            }
        }
        strcpy(c[index],c[i]);
        strcpy(c[i],max);
    }
    for (int i = 1; i < n + 1; ++i) {
        puts(c[i]);
    }
}
