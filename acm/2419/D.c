/**
* @Author Misoryan
* @Date 2023/05/18 15:36
*/
#include <stdio.h>
void sort(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void output(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d\n",a[i]);
    }
}