#include <stdio.h>
int main()
{
    int array[50], pos, i, n, insert;
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)    
        scanf("%d", &array[i]);
    printf("enter the location you want to enter the number\n");
    scanf("%d", &pos);
    printf("Please enter the value\n");
    scanf("%d", &insert);
    for (i = n - 1; i >= pos - 1; i--)    
        array[i+1] = array[i];
    array[pos-1] = insert;
    printf("Resultant array is\n");
    for (i = 0; i <= n; i++)    
        printf("%d\n", array[i]);    
    return 0;
}