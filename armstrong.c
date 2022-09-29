#include <stdio.h>
int main() {
    int n,num , rem, result = 0;
    printf("Enter the num: ");
    scanf("%d", &n);
    num =n;

    while (num != 0) {
        rem = num % 10;
        
       result += rem * rem * rem;
       num /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}