//first type of array declaration
/*#include <stdio.h>
int main()
{
    int arr1[] = {20, 21, 22, 23, 24}, i;
    printf("elenemts of arr1 = \n");
    for (i = 0; i < 5; i++)
    {

        printf(" %d ", arr1[i]);
    }
    return 0;
}
//second way
#include <stdio.h>
int main()
{
    int arr2[3],i;
    arr2[0]=30;
    arr2[1]=31;
    arr2[2]=32;
    printf("elenemts of arr2 = ");
    for (i = 0; i < 3; i++)
    {
        printf(" %d ", arr2[i]);
    }
    return 0;
}*/
//third way
#include <stdio.h>  
  
void  main()  
{  
    int arr[4]; 
    int i;  
       printf("Read and Print elements of an array:\n");
       printf("Input 4 elements in the array :\n");  
    for(i=0; i<4; i++)  
    {  
        printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
    printf("Elements in array are: ");  
    for(i=0; i<4; i++)  
    {  
        printf("%d  ",arr[i]);  
    }	
}
