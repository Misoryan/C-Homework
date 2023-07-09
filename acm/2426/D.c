/**
* @Author Misoryan
* @Date 2023/05/28 19:47
*/
#include <stdio.h>
#include <string.h>
int main() {
    char s[101];
    gets(s);
    int count = 0;
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
            count++;
        }
    }
    printf("%d",count);
}
