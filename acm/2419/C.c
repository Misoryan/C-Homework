/**
* @Author Misoryan
* @Date 2023/05/18 15:30
*/
#include<stdio.h>
void reverse(int a[], int n) {
    for (int i=0;i<n;++i) {
        if (i < n - 1 - i) {
            int temp = a[n - 1 - i];
            a[n - 1 - i] = a[i];
            a[i] = temp;
        }
    }
}
int main()
{
    int a[10],i,n=0;
    while( scanf("%d",&a[n])==1 ) n++;
    reverse(a,n);
    for(i=0;i<n;i++)  printf(" %d\n",a[i] );
}