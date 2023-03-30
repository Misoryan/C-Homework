/**
* @Author Misoryan
* @Date 2023/03/30 13:43
*/

#include <stdio.h>
#include <string.h>

int main() {
    char c[50];
    gets(c);
    for (int i = 0; i < strlen(c); ++i) {
        printf("%c",c[strlen(c) - i - 1]);
    }
}
