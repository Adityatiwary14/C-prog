#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
void main()
{
    char str[max];
    int alpha, digit, special, i;
    alpha = digit = special = i = 0;
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            special++;
        }
        i++;
    }
    printf("Number of Alphabets in the string is : %d\n", alpha);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n",special);
}