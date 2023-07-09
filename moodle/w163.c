/**
* @Author Misoryan
* @Date 2023/06/01 15:23
*/
#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        int yes = 0;
        for (int j = 1; j < i; ++j) {
            if (strcmp(argv[i],argv[j]) == 0) {
                yes = 1;
            }
        }
        if (yes == 0) {
            printf("%s\n",argv[i]);
        }
    }
}
