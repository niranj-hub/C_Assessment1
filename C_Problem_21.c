#include <stdio.h>
int main()
{
    int a, rem, result;
    printf("Enter a number: ");
    scanf("%d", &a);
    rem=a%2;
    result=a-(5*rem);
    printf("%d",result);
    return 0;
}
