#include <stdio.h>
int main()
{
    int a, ones, result;
    printf("Enter a two digit number:");
    scanf("%d", &a);
    ones=a%10;
    result=10+ones;
    printf("%d",result);
    return 0;
}
