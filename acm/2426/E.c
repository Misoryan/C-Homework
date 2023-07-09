/**
* @Author Misoryan
* @Date 2023/05/30 18:44
*/
#include <stdio.h>

int main() {
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    int length1 = 0;
    for (int i = 0; s1[i] != '\0'; ++i) {
        length1 = i + 1;
    }
    int length2 = 0;
    for (int i = 0; s2[i] != '\0'; ++i) {
        length2 = i + 1;
    }
    int count = 0;
    for (int i = 0; i < length1; ++i) {
        int yes = 1;
        for (int j = 0; j < length2; ++j) {
            if (yes == 1 && s1[i + j] != s2[j]) {
                yes = 0;
            }
        }
        if (i + length2 - 1 < length1 && yes == 1) {
            count++;
            i = i + length2 - 1;
        }
    }
    printf("%d",count);
}
