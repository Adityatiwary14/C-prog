#include <stdio.h>  
int main()  
{  
    int n, i, j, m = 1;  
    printf (" Enter the number = ");  
    scanf ("%d", & n);  
    for (i = n; i <= 1; i--)  
    {  
        for (j = n; j >= i; j--)  
        {  
            printf( "* ");  
        }  
        printf("\n");  
    }  
    return 0; 
}  