/**
* @Author Misoryan
* @Date 2023/05/11 14:58
*/
#include<stdio.h>
#include<math.h>
int solve( int a, int b, int c, float *x1, float *x2 ) {
    int delta = b * b - 4 * a * c;
    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *x1 = ((-b + sqrt(delta)) * 1.0) / (2.0 * a);
        *x2 = ((-b - sqrt(delta)) * 1.0) / (2.0 * a);
        return 1;
    } else {
        *x1 = ((-b + sqrt(delta)) * 1.0) / (2.0 * a);
        *x2 = ((-b - sqrt(delta)) * 1.0) / (2.0 * a);
        return 2;
    }
}
int main( )
{
    int a, b, c, n ;
    float x1, x2 ;
    scanf("%d%d%d",&a,&b,&c) ;
    n = solve(a, b, c, &x1, &x2 ) ;
    if(n ==0 ) printf("No real solutions\n") ;
    else if(n==1) printf("x1=x2=%f\n",x1) ;
    else printf(" x1=%f  \n x2=%f  \n", x1, x2 ) ;
}