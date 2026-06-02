#include <stdio.h>
int main()
{
    int a,tens,hundreds,result;
    printf("Enter a three digit number:");
    scanf("%d", &a);
    tens=(a/10)%10;
    hundreds=a/100;
    result=hundreds*100+tens*10+2;
    printf("%d",result);
    return 0;
}
