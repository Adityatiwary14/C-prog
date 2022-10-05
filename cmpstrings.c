#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    int cmp;
    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);
    cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("strings are same");
    else
        printf("strings are not same");
    return 0;
}