#include<stdio.h>
int main()
{
    int i,a,b=0,c=1,d;
    printf("Enter a number :");
    scanf("%d",&a);
    for(i=0;i<a;++i)
    {
        d=b+c;
        printf("%d\n",b);
        b=c;
        c=d;
    }
    return 0;
}