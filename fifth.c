#include <stdio.h>

struct pro
{
    char pro_name[50];
    int price_pu;
    int item_num;
    int net_amt;
};

int main()
{   
    struct pro narendra;
    struct pro *ptr;
    ptr = &narendra;

    printf("product name : ");
    scanf("%s", &(ptr->pro_name));

    printf("Price per unit: ");
    scanf("%d", &(ptr->price_pu));

    printf("total number of items: ");
    scanf("%d", &(ptr->item_num));

    ptr->net_amt = ptr->item_num * ptr->price_pu;

    printf("total amount: %d", ptr->net_amt);
    return 0;
}