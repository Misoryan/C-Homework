/**
* @Author Misoryan
* @Date 2023/05/03 21:45
*/
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d",&n); //指定n个名字
    char names[n][31]; //n个字符串，每个字符串长度为30
    char results[n][31];

    int resultIndex = 0;
    for (int i = 0; i < n; ++i) { //依次输入n个名字
        for (int j = 0; j < 2; ++j) {
            if (j == 0) {
                scanf("%s",&names[i]); //输入姓
            } else {
                char temp[31];
                scanf("%s",&temp); //输入名
                strcat(names[i],temp); //把名接在姓的后面
            }
        }
    }
    char search[4];
    scanf("%s",&search);
    for (int i = 0; i < n; ++i) {
        char temp[31] = ""; //把名字转化为小写字母缩写临时储存
        int tempIndex = 0;
        for (int j = 0; j < strlen(names[i]); ++j) {
            if (names[i][j] > 64 && names[i][j] < 91) { //判断字符是大写字母
                temp[tempIndex] = names[i][j] + 32; //写入,并将大写字母转为小写字母
                tempIndex++;
            }
        }
        if (strcmp(search,temp) == 0) {
            strcpy(results[resultIndex],names[i]); //如果缩写一致，把这个名字写入结果中等待后续排序
            resultIndex++;
        }
    }
    if (resultIndex == 0) { //表示没有符合结果
        printf("No");
    } else {
        for (int i = 0; i < resultIndex; ++i) { //排序法 小的替换到前面
            for (int j = i; j < resultIndex; ++j) {
                if (strcmp(results[i],results[j]) > 0) {
                    char temp[31];
                    strcpy(temp,results[j]);
                    strcpy(results[j],results[i]);
                    strcpy(results[i],temp);
                }
            }
        }
        for (int i = 0; i < resultIndex; ++i) {
            printf("%s\n",results[i]); //输出结果
        }
    }
}