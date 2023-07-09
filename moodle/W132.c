/**
* @Author Misoryan
* @Date 2023/05/11 14:44
*/
#include<stdio.h>
void f(int a1, int b1, int c1, int a2, int b2, int c2, float *x, float *y) {
    *x = (c2 - ((b2 * c1) * 1.0 / b1)) / (a2 - ((b2 * a1 * 1.0) / b1));
    *y = (c2 - ((a2 * c1) * 1.0 / a1)) / (b2 - ((a2 * b1 * 1.0) / a1));
}
int main( )
{
    float x , y ;
    f ( 1, 1, 35, 2, 4, 94, &x, &y ) ;
    printf ("%f \n %f \n", x, y ) ;
    f ( 2, 0, 3, 0, 4, 5, &x, &y ) ;
    printf ("%f \n %f \n", x, y ) ;
}