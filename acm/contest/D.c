/**
* @Author Misoryan
* @Date 2023/05/03 16:43
*/
#include <stdio.h>
#include <string.h>

int getIndexByName(char name[]) {
    char names[20][12] = {
            "Doctor",
            "Lawyer",
            "Charitarian",
            "Gardener",
            "Magician",
            "Machinist",
            "LuckyDog",
            "Adventurer",
            "Mercenary",
            "BlindGirl",
            "AirForce",
            "Pioneer"};
    for (int i = 0; i < 12; ++i) {
        if (strcmp(name,names[i]) == 0) {
            return i;
        }
    }
    return -1;
}
int main() {
    int T;
    int founded = 0;
    int scores[12];
    char answer[20] = "NOTHING";
    for (int i = 0; i < 12; ++i) {
        scores[i] = 0;
    }
    scanf("%d",&T);
    for (int i = 0; i < T; ++i) {
        int n;
        scanf("%d",&n);
        for (int j = 0; j < n; ++j) {
            char name[20];
            int score;
            scanf("%s",&name);
            scanf("%d",&score);
            int index = getIndexByName(name);
            if (founded == 0 && index != -1) {
                scores[index] = scores[index] + score;
                if (scores[index] >= 2000) {
                    strcpy(answer,name);
                    founded = 1;
                }
            }
        }
    }
    printf("%s",answer);
    return 0;
}
