/**
* @Author Misoryan
* @Date 2023/05/18 15:17
*/
#include<stdio.h>

void max_min(int s[], int n, int *a, int *b) {
    int max,min = s[0];
    for (int i = 0; i < n; ++i) {
        if (s[i] > max) {
            max = s[i];
        }
        if (s[i] < min) {
            min = s[i];
        }
    }
    *a = min;
    *b = max;
}
int main()
{
    int x[ ] = { 1, 2, 3, 4, 5 } ;
    int y[ ] = { 31, 41, 59, 26, 53, 58, 97, 93 } ;
    int z[ ] = { 2, 7, 1, 8, 2, 8, 1, -8, 2, 8 } ;
    int a , b ;
    max_min ( x, 5, &a, &b ) ;
    printf ( "%d %d\n" , a, b ) ;
    max_min ( y, 8, &a, &b ) ;
    printf ( "%d %d\n" , a, b ) ;
    max_min ( z, 10, &a, &b ) ;
    printf ( "%d %d\n" , a, b ) ;
}