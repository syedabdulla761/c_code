#include<stdio.h>
int main()
{
    int a,b,c,GCD;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(c=1;c<=a && c<=b;++c)
    {
            if((a%c==0) && (b%c==0))
         GCD=c;;
     }
     printf("HCF of %d and %d is %d\n",a,b,GCD);
    return 0;
}
