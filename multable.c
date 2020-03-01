#include<stdio.h>
int main()
{
    int a,b,c=a;
    printf("Enter a number to creates it multiplication table");
    scanf("%d",&a);
    for(b=1;b<11;++b)
    {
        c=a*b;
    printf("%d*%d=%d\n",a,b,c);
    }
    return 0;
}