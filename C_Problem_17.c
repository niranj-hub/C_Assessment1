#include <stdio.h>
int main()
{
    int a, result;
    printf("Enter a two digit number: ");
    scanf("%d", &a);
    result=(a/10)*10;
    printf("%d",result);
    return 0;
}
