//
// Created by 22106 on 2023/3/7.
//
#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            if (j < i) {
                printf(" ");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }
}
