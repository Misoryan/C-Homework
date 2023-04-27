/**
* @Author Misoryan
* @Date 2023/04/06 14:03
*/
#include <stdio.h>
typedef FILE *file;

int main() {
    file f;
    f = fopen("D:\\t1.txt","w");
    char c;
    while (1) {
        scanf("%c",&c);
        if (c == '#') {
            break;
        }
        fputc(c,f);
    }
    fclose(f);
}
