/**
* @Author Misoryan
* @Date 2023/05/04 20:20
*/
#include <stdio.h>

int main() {
    int group[3][7] = {{1,3,5,7,8,10,12},{4,6,9,11},{2}};
    int x,y;
    scanf("%d%d",&x,&y);
    for (int i = 0; i < 3; ++i) {
        int xFound = 0;
        int yFound = 0;
        for (int j = 0; j < sizeof (group[i]) / sizeof (group[i][0]); ++j) {
            if (group[i][j] == x) {
                xFound = 1;
            }
            if (group[i][j] == y) {
                yFound = 1;
            }
        }
        if (xFound == 1 && yFound == 1) {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
}
