/**
* @Author Misoryan
* @Date 2023/06/01 14:41
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 0; i < argc; i++) {
        int num;
        if (sscanf(argv[i], "%d", &num) == 1) {
            sum += num;
        }
    }
    printf("%d\n", sum);
}
