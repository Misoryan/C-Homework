/**
* @Author Misoryan
* @Date 2023/03/30 14:01
*/
#include <stdio.h>
#include <string.h>
int main() {
    char s[50];
    gets(s);
    int yes = 1;
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] != s[strlen(s) - i - 1]) {
            yes = 0;
            break;
        }
    }
    printf(yes == 1 ? "yes" : "no");
}