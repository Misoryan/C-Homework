/**
* @Author Misoryan
* @Date 2023/05/25 14:49
*/
#include<stdio.h>
int my_strcmp ( char *s1 , char *s2 ) {
    int index = 0;
    for (int i = 0; s1[i] != '\0'; ++i) {
        index = i;
        if (s1[i] > s2[i]) {
            return 1;
        } else if (s1[i] < s2[i]) {
            return -1;
        }
        if (s2[i] == '\0') {
            return 1;
        }
    }
    if (s2[index] == '\0') {
        return 0;
    } else {
        return -1;
    }
}

int main()
{
    char *a[ ] = { "dog", "ant", "bee", "cat", "beer", "bear" } ;
    char *t ;
    int i , j , n ;
    n = 6 ;
    for ( i=0 ; i<=n-1 ; i=i+1)
        for ( j=i+1 ; j<=n-1 ; j=j+1 )
            if (my_strcmp( a[ i ] , a[ j ] ) >=0 )
            {
                t = a[ i ] ; a[ i ] = a[ j ] ; a[ j ] = t ;
            }
    for ( i = 0 ; i<=n-1 ; i=i+1 ) printf("%s \n" , a[ i ] ) ;
}
