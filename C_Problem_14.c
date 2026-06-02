#include <stdio.h>
int main()
{
    int a, ones, tens, hundreds, reverse;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    ones=a%10;
    tens=(a/10)%10;
    hundreds=a/100;
    reverse=ones*100+tens*10+hundreds;
    printf("%d",reverse);
    return 0;
}
