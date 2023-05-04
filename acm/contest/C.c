/**
* @Author Misoryan
* @Date 2023/05/03 16:28
*/
#include <stdio.h>
//5x+8y+10z = n
//x+y+z <= m
int main() {
    int n,m,count = 0;//n为分数,m为次数
    scanf("%d%d",&n,&m);
    //i个白球,j个蓝球,0~m-i-j个黄球
    //蓝球0~m个
    for (int i = 0; i < m+1; ++i) {
        for (int j = 0; j < m+1-i; ++j) {
            for (int k = 0; k < m+1-i-j; ++k) {
                if (5*i+8*j+10*k == n) {
                    count++;
                }
            }
        }
    }
    printf("%d",count > 0 ? count : -1);
}
