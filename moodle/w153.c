/**
* @Author Misoryan
* @Date 2023/05/25 15:05
*/
#include<stdio.h>
char * my_strrev ( char *s ) {
    int length = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        length++;
    }
    for (int i = 0; i < length; ++i) {
        if (i <= length - 1 - i) {
            char temp = s[i];
            s[i] = s[length - 1 - i];
            s[length - 1 - i] = temp;
        }
    }
    return s;
}

int main()
{
    char a[100] = "DCBA" ;
    char b[100] = "GFE" ;
    printf ( " %s " , my_strrev(a) ) ;
    printf ( " %s " , my_strrev("") ) ;
    printf ( " %s " , my_strrev(b) ) ;
}
