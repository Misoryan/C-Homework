/**
* @Author Misoryan
* @Date 2023/05/18 15:29
*/
#include<stdio.h>
int sum(int a[], int n) {
    int total = 0;
    for (int i=0;i<n;++i) {
        total += a[i];
    }
    return total;
}
int main()
{
    int a[10],n=0;
    while( scanf("%d",&a[n])==1 ) n++;
    printf("%d\n",sum(a,n) );
}