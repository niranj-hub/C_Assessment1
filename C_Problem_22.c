#include <stdio.h>
int main()
{
    int a, rem, tens, result;
    printf("Enter a number: ");
    scanf("%d", &a);
    tens=(a/10)%10;
    rem=tens%2;
    result=a-(5*rem);
    printf("%d",result);
    return 0;
}
