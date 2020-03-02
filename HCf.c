#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(c<=a && c<=b)
       {
            if((c%a==0) && (c%b==0))
        {
            printf("HCF of %d and %d is %d",a,b,c);
        }
        else
        {
            printf("HCF doesnt exist");
        } 
       }
    return 0;
}
