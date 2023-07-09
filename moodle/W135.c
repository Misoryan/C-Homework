/**
* @Author Misoryan
* @Date 2023/05/11 15:24
*/
#include<stdio.h>
#include<math.h>
int f ( int x, int y, float *r, float *theta ) {
    *r = sqrt(x * x + y * y);
    *theta = atan2(y,x);
}
int main( )
{
    float r , c ;

    f( 0, 0, &r, &c ) ; printf( "( %f , %f ) \n", r, c ) ;



    f( 3, 0, &r, &c ) ; printf( "( %f , %f ) \n", r, c ) ;


    f( 2, 2, &r, &c ) ; printf( "( %f , %f ) \n", r, c ) ;


    f( 0, 7, &r, &c ) ; printf( "( %f , %f ) \n", r, c ) ;


    f( -3, 4, &r, &c ) ; printf( "( %f , %f ) \n", r, c ) ;


    f( -9, 0, &r, &c ) ; printf( "( %f , %f ) \n", r, c ) ;


    f( -2, -4, &r, &c ) ; printf( "( %f , %f ) \n", r, c ) ;


    f( 0, -6, &r, &c ) ; printf( "( %f , %f ) \n", r, c ) ;


    f( 8, -3, &r, &c ) ; printf( "( %f , %f ) \n", r, c ) ;


}