#include<stdio.h>
int main()
{
    int n,rev=0,num;
    printf("enter the number = ");
    scanf("%d",&n);
    num=n;
    while (n!=0)
    {
        rev=rev*10+(n%10);
        n=n/10;
        
    }
    printf("%d",rev);
    if (num == rev)
    {
        printf("\nnumber is palindrome");  
    }
    else
        printf("\nnot a palindrome number");
    return 0;
}