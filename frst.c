#include <stdio.h>
void main()
{
    int i, n;
    printf("ENTER THE LENGTH OF YOUR ARRAY : ");
    scanf("%d",&n);
    int a1[n];
    printf("ENTER THE ELEMENTS OF YOUR ARRAY :\n");
    
    int a2[n];

    int *a1_p = a1;
    int *a2_p = a2;
    int *end_p = &a1[n - 1];
    
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }

    while (*a1_p<= end_p)
    {
        *a2_p = *a1_p;
        *a1_p++;
        *a2_p++;
    }
    int *ptr = &a2[0];

    for (i=0; i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}