#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=1,c,i;
    printf("Enter a number:  ");
    scanf("%d",&a);
    for (i = 2; i <=a/2; i++)
    {
        if(a%i==0)
            printf("%d is not a prime number\n",a);
        else
            printf("%d is a prime number\n",a);
        break;
    }
    if(a==1)
    {
        printf("1 is neither prime or composite\n");
    }
    else if(a==2)
    {
        printf("2 is neither prime or composite\n");
    }
    return 0;
}