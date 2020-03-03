#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,n=1;
    printf("Enter a base:");
    scanf("%d",&a);
    printf("Enter an exponent:");
    scanf("%d",&b);
    n=pow(a,b);
    printf("%d^%d=%d",a,b,n);
    return 0;
}