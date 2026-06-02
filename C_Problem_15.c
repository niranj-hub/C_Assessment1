#include <stdio.h>
int main() 
{
    int a,ones,tens,hundreds,thousands,reverse;
    printf("Enter a four digit number:");
    scanf("%d",&a);
    ones=a%10;
    tens=(a/10)%10;
    hundreds=(a/100)%10;
    thousands=a/1000;
    reverse=thousands*1000+hundreds*100+ones*10+tens;
    printf("%d",reverse);
    return 0;
}
