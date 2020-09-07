#include<stdio.h>
main()
{
    int w,x,y,z,g;
    scanf("%d %d %d %d",&w,&x,&y,&z);
    greatest(w,x,y,z);
    printf("%d",greatest());
}
greatest(int a,int b,int c,int d)
{
    int m1,m2;
    return ((m1=a>b?a:b)>(m2=c>d?c:d)?m1:m2);
}
