#include <stdio.h>
int main()
{
    int a, ones, tens, hundreds, sum;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    ones=a%10;
    tens=(a/10)%10;
    hundreds=a/100;
    sum=ones+tens+hundreds;
    printf("%d",sum);
    return 0;
}
