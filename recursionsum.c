#include <stdio.h>
int getSum(int *array, int last);
int main()
{
    int array[100], i, n;

    printf("Enter number of elements in Array: ");
    scanf("%d", &n);
    printf("Enter %d numbers \n ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Sum of all numbers are : %d",
           getSum(array, n - 1));
    return 0;
}
int getSum(int *array, int last)
{
    int mid;
    if (NULL == array || last < 0)
        return 0;
    return array[last] + getSum(array, last - 1);
}