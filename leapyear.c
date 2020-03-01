#include<stdio.h>
int main()
{
    int a,i,b=1;
    printf("Enter a number");
    scanf("%d",&a);
    if(a<0)
    printf("Error! negative number doest have factorial");
    else
    {
        for(i=1;i<=a;++i)
        b*=i;
    }
        printf("factorial of %d = %d\n",a,b);
    return 0;
}