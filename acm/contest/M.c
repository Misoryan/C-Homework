/**
* @Author Misoryan
* @Date 2023/05/04 21:33
*/
#include <stdio.h>

int main() {
    int nums[1001];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&nums[i]);
    }
    while (1) {
        int end = 1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (nums[i] == nums[j] && nums[i] != 0 && i != j) {
                    nums[i] = nums[i] + nums[j];
                    nums[j] = 0;
                    end = 0;
                }
            }
        }
        if (end == 1) {
            break;
        }
    }
    int max = nums[0];
    for (int i = 0; i < n; ++i) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    printf("%d",max);
}