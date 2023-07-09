/**
* @Author Misoryan
* @Date 2023/06/08 15:11
*/
#include <stdio.h>
struct student {
    int num;
    char name[20];
    char sex;
    int age;
};

int main() {
    struct student a[20];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %s %c %d",&a[i].num,a[i].name,&a[i].sex,&a[i].age);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d %s %c %d",a[i].num,a[i].name,a[i].sex,a[i].age);
        if (i != n - 1) {
            printf("\n");
        }
    }
}