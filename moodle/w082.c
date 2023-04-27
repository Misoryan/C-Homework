/**
* @Author Misoryan
* @Date 2023/04/06 14:58
*/
#include <stdio.h>
typedef FILE *file;

int main() {
    file f;
    f = fopen("D:\\t2.txt","r");
    char c;
    while (1) {
        c = fgetc(f);
        if (c == EOF) {
            break;
        }
        printf("%c",&c);
    }
    fclose(f);
}