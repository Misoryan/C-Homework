/**
* @Author Misoryan
* @Date 2023/06/01 14:28
*/

#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        for (int j = i + 1; j < argc; ++j) {
            if (strcmp(argv[i],argv[j]) > 0) {
                char temp[100];
                strcpy(temp,argv[i]);
                strcpy(argv[i],argv[j]);
                strcpy(argv[j],temp);
            }
        }
    }
    for (int i = 1; i < argc; ++i) {
        printf("%s\n",argv[i]);
    }
}