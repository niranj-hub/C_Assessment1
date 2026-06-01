#include <stdio.h>
int main()
{
    int a,ones;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    ones=a%10;
    printf("%d",ones);
    return 0;
}
