#include<stdio.h>
int main()
{
    int a,ones,tens,sum;
    printf("Enter a two digit number:");
    scanf("%d",&a);
    ones=a%10;
    tens=a/10;
    sum=ones+tens;
    printf("%d",sum);
    return 0;
}
