#include <stdio.h>
int main()
{
    int a, tens;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    tens = (a/10)%10;
    printf("%d", tens);
    return 0;
}
