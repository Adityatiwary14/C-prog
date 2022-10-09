#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100],rev;
    printf("enter your str1 : ");
    scanf("%s",&str1);
    rev=strrev(str1);
    printf("reverse of str1 = %s",rev);
    if (rev==str1)
    {
        printf("\nstring is palindrome");
    }
        printf("\nstring is not a palindrome");
}