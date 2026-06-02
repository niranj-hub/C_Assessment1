#include <stdio.h>
int main()
{
    int a, ones,tens, hundreds, sum, result1,result2;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    ones=a%10;
    tens=(a/10)%10;
    hundreds=a/100;
    sum=ones+tens+hundreds;
    result1=(sum/10)+(sum%10);
    result2=(result1 %10)+(result1 /10);
    printf("%d",result2);
    return 0;
}
