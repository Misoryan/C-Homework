#include<stdio.h>
void move(int n,char a,char b,char c,int index)
{
    if( n== 1 ) printf("%d:move %d# from %c to %c\n",index,n,a,c);
    else{
        move(n-1,a,c,b,index+1);
        printf("%d:move %d# from %c to %c\n",index,n,a,c);
        move(n-1,b,a,c,index+1);
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        move(n,'A','B','C',1);
        printf("\n");
    }
    return 0;
}


