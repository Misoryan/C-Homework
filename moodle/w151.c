/**
* @Author Misoryan
* @Date 2023/05/25 14:46
*/
#include<stdio.h>

char * my_strcat ( char *s1 , char *s2 ) {
    int index = 0;
    for (int i = 0; s1[i] != '\0'; ++i) {
        index = i;
    }
    for (int i = 0; s2[i] != '\0'; ++i) {
        s1[index + i] = s2[i];
    }
    return s1;
}
int main()
{
    char s[100] = "" ;
    char *p ;
    p = my_strcat ( my_strcat ( my_strcat( s , "") ,  "Hello  ") , "Hi" ) ;
    printf ( "%s \n " , p ) ;
}