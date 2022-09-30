#include<stdio.h>
int main()
{
   int a=0,b=1,c,i,n;
   printf("enter your num.=");
   scanf("%d",&n);
   printf("%d",a);
   printf("%d",b);
   for (i=2;i<n;i++)
   {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
   }
   return(0);
}
