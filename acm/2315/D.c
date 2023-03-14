//
// Created by 22106 on 2023/3/7.
//
#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < (i+1); ++j) {
            printf("%d*%d=%-3d",i+1,j+1,(i+1)*(j+1));
        }
        printf("\n");
    }
}
