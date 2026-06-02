#include <stdio.h>
int main()
{
    int a, ones, hundreds, sum, rem, result;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    ones=a%10;
    hundreds=a/100;
    rem=(ones%2)*(hundreds%2);
    result=a-(5*rem);
    printf("%d",result);
    return 0;
}
