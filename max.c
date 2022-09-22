#include<stdio.h>
int main()
{int a,b,c;
    printf("enter first no.=");
    scanf("%d",&a);
    printf("enter first no.=");
    scanf("%d",&b);
    printf("enter first no.=");
    scanf("%d",&c);
    if(a>b && a>c)
    {
    printf("a is greatest");
    }
    else if(b>c && b>a)
    {
    printf("b is greatest");
    }
    else
    {
    printf("c is greatest");
    }
}

