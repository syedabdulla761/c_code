#include<stdio.h>
main()
{
    int x,fact;
    printf("Enter a number:-");
    scanf("%d",&x);
     fact=factorial(x);
    printf("factorial=%d",fact);
}
factorial(int y)
{
    int f=1,i;
    for(i=y;i>=1;i--)
    {
        f=f*i;
    }
    return (f);
    
}
