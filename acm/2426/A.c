/**
* @Author Misoryan
* @Date 2023/05/30 18:37
*/
#include <stdio.h>

int my_strlen(char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        count = i + 1;
    }
    return count;
}
int main()
{
    char s[100];
    gets(s);
    printf("%d\n",my_strlen(s) );

}