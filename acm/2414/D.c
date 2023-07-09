/**
* @Author Misoryan
* @Date 2023/05/15 15:53
*/
#include <stdio.h>
void sort(int *a,int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    sort(&a,&b);
    sort(&a,&c);
    sort(&b,&c);
    printf("%d %d %d\n", a, b, c );
}