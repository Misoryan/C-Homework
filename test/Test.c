/**
* @Author Misoryan
* @Date 2023/05/04 12:48
*/
#include<stdio.h>
#include <string.h>
int main( )
{
    int T,n,s,m=1,h=1,i,o=0,l=0;
    char name[20],name1[20];
    scanf("%d",&T);
    char str[12][21] = {"Doctor", "Lawyer", "Charitarian", "Gardener", "Magician", "Machinist", "LuckyDog",
                        "Adventurer", "Mercenary", "BlindGirl", "AirForce", "Pioneer"};

    int a[12]={0};
    while(h<=T){
        scanf("%d",&n);
        m=1;
        while (m<=n){
            scanf("%s %d",&name,&s);
            for(i=0;i<12;i++){
                if(strcmp(name,str[i])==0){
                    a[i]+=s;
                    if(a[i]>=2000&&l==0){
                        o=1;
                        strcpy(name1,str[i]);
                        l++;
                    }
                }

            }
            m++;
        }
        h++;
    }
    if(o==0){
        printf("NOTHING");
    }
    else{
        printf("%s",name1);
    }
}
