#include<stdio.h>
int main()
{int y;
    printf("enter year=");
    scanf("%d",&y);
    if(y%100!=0 && y%4==0 || y%400==0)
    {
    printf(" %d is a leap year",y);
    }
    else
    {
    printf("%d not a leap year",y);
    }
}