/**
* @Author Misoryan
* @Date 2023/05/15 15:47
*/
#include<stdio.h>
void calc(int h, int f,int *c,int *r) {
    *c = 2*h - f / 2;
    *r = f / 2 - h;
}
int main()
{
    int h,f,c,r;
    scanf("%d%d",&h,&f);
    calc(h,f,&c,&r);
    printf("%d %d\n", c, r );
}
