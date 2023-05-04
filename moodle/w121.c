/**
* @Author Misoryan
* @Date 2023/05/04 14:07
*/
#include<stdio.h>
#include<math.h>
float d(float lon1,float lat1,float lon2,float lat2)
{
    float a,b,c,t;
    a = lat1*acos(-1)/180;
    b = lat2*acos(-1)/180;
    c = (lon1-lon2)*acos(-1)/180;
    t = cos(a)*cos(b)*cos(c)+sin(a)*sin(b);
    return acos(t)*6371;
}
int main( )
{
    printf("%f \n", d( 116.42, 39.92, 121.56, 29.86 ) ) ;
    printf("%f \n", d( 102.73, 25.05, 125.35, 43.88 ) ) ;
}