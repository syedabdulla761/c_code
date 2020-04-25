#include<stdio.h>
main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;
    printf("\n value of i=%d",i);
    printf("\n vlaue of j=%f",j);
    printf("\n value of k=%c",k);
    x=&i;
    y=&j;
    z=&k;
    printf("\n address of i=%u",x);
    printf("\n address of j=%u",y);
    printf("\n address of k=%u",z);
    x++;
    y++;
    z++;
    printf("\n new address of i=%u",x);
    printf("\n new address of j=%u",y);
    printf("\n new address of k=%u",z);
    y=y-1;
    printf("\nj=%f",*y);
}