/**
* @Author Misoryan
* @Date 2023/04/20 13:30
*/

#include <stdio.h>

int min(int a,int b) {
    return a > b ? b : a;
}

int main() {
        printf("%d   ", min(6,7) );
        printf("%d   ", min(6,6) );
        printf("%d   ", min(7,6) );
}
