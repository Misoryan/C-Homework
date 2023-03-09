//
// Created by 22106 on 2023/3/9.
//
#include <stdio.h>

int main() {
    int a,b;
    int min, max = 0; //最小公倍数和最大公约数
    scanf("%d %d",&a,&b);
    for (int i = 0; i < a*b; ++i) {
        if (a % (i+1) == 0 && b % (i+1) == 0) {
            min = i + 1;
        }
        if ((i + 1) % a == 0 && (i + 1) % b == 0) {
            max = i + 1;
            break;
        }
    }
    printf("%d %d",min,max);
}
