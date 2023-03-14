//
// Created by 22106 on 2023/3/7.
//
#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < (i+1+a); ++j) {
            if (j < (a-i)) {
                if (j != 0) {
                    printf(" ");
                }
            } else {
                printf("%c",65 + i);
            }
        }
        printf("\n");
    }
}
