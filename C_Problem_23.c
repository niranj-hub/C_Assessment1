#include <stdio.h>
int main()
{
    int a, ones, tens, sum, rem, result;
    printf("Enter a two digit number: ");
    scanf("%d", &a);
    ones=a%10;
    tens=a/10;
    sum=ones+tens;
    rem=sum%2;
    result=a-(5*rem);
    printf("%d",result);
    return 0;
}
