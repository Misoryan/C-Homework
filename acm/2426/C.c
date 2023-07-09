/**
* @Author Misoryan
* @Date 2023/05/30 18:41
*/
#include<stdio.h>
int ispalindrome(char s[]) {
    int length = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        length = i + 1;
    }
    for (int i = 0; i < length; ++i) {
        if (s[i] != s[length - 1 - i] && i <= length - 1 - i) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[100];
    gets(s);
    if ( ispalindrome(s) ) printf("yes");
    else printf("no");
}