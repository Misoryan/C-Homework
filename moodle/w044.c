/**
* @Author Misoryan
* @Date 2023/03/09 14:35
*/
#include <stdio.h>

int main() {
    for (int i = 0; i < 1000; ++i) {
        if ((i+1) % 3 == 2 && (i+1) % 5 == 3 && (i+1) % 7 == 2) {
            printf("%d ",i+1);
        }
    }
}
