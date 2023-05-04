/**
* @Author Misoryan
* @Date 2023/05/04 20:33
*/
#include <stdio.h>

int A(int m) {
    if (m <= 2) {
        return m;
    } else {
        return m * A(m-1);
    }
}

int C(int n,int m) {
    return m == n || n == 0 ? 1 : A(m) / (A(n) * A(m - n));
}

int main() {
    int m;
    scanf("%d",&m);
    for (int n = 0; n < (m + 1); ++n) {
        int c = C(n, m); //获取系数C(n,m)
        if (c != 0) {
            //若系数不为1
            if (n != 0) {
                printf("+"); //如果不是开头则加上+号
            }
            if (c != 1) {
                printf("%d*", c); //填写系数
            }
            if (m - n != 0) {
                printf("a"); //如果a存在则加上a
                if (m - n > 1) {
                    printf("^%d",m-n); //如果a的指数大于1就补上指数
                }
            }
            if (n != 0) { //如果b存在
                if (m - n != 0) {
                    printf("*"); //如果a也存在就补上*
                }
                printf("b",n);
                if (n > 1) {
                    printf("^%d",n);
                }
            }
        }
    }
}
