/**
* @Author Misoryan
* @Date 2023/05/18 15:27
*/
#include<stdio.h>
void init(int a[], int n, int m) {
    for (int i = 0; i < n; ++i) {
        a[i] = m;
    }
}
int main()
{
    int a[10],i,n,m;
    scanf("%d%d",&n,&m);
    init(a,n,m);
    for(i=0;i<n;i++)  printf(" %d\n",a[i] );
}