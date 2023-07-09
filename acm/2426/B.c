/**
* @Author Misoryan
* @Date 2023/05/30 18:40
*/
#include <stdio.h>
char *my_strcpy(char s1[],char s2[]) {
    for (int i = 0; s2[i] != '\0'; ++i) {
        s1[i] = s2[i];
    }
    return s1;
}

int main()
{
    char s[100] , t[100];
    gets(s);
    printf("%s\n",my_strcpy(t,s) );
}