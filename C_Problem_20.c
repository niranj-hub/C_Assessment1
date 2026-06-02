#include <stdio.h>
int main()
{
    int a, ones,tens, hundreds, result;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    ones=a%10;
    hundreds=a/100;
    result=hundreds*100+ones;
    printf("%d",result);
    return 0;
}
