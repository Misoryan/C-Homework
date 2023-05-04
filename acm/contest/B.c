/**
* @Author Misoryan
* @Date 2023/05/03 16:14
*/
#include <stdio.h>

int getDayAmount(int month) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } else if (month != 2) {
        return 30;
    } else {
        return 28;
    }
}

int main() {
    int year,month,day;
    scanf("%d%d%d",&year,&month,&day);
    double total = 0;
    for (int i = 0; i < month; ++i) {
        //current month: i+1
        for (int j = 0; j < getDayAmount(i + 1); ++j) {
            if (month == i + 1 && j + 1 > day) {
                printf("%.2f",total);
                return 0;
            } else {
                total += (i + 1) + (j + 1 < 10 ? 0.1 : 0.01) * (j + 1);
            }
        }
    }
    printf("%.2f",total);
}