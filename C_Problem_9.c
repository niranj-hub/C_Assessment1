#include <stdio.h>
int main()
{
    int a, hundreds;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    hundreds = a / 100;
    printf("The hundreds digit is %d", hundreds);
    return 0;
}
