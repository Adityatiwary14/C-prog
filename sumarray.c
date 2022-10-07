#include<stdio.h>
int main()
{
    int arr1[5],i,j,arr2[5],arr3[5];
    for(i=0;i<5;i++)4
    {
        printf("enter the arr1 element number %d =",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("enter the arr2 element number %d =",i);
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++)
    {
        arr3[i] = arr1[i]+arr2[i];
        printf("element number %d of arr3 = %d\n",i, arr3[i]);
    }
}