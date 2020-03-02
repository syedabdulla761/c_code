#include<stdio.h>
int main()
{
    int i,a,b=0,c=1,d;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;++i)
    {
        printf("%d\n",b);
        d=b+c;
        b=c;
        c=d;
    }
    return 0;
}