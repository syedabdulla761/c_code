#include<stdio.h>
int main()
{
    char operator;
    int a,b;
    printf("enter type of operator");
    scanf("%c",&operator);
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    switch(operator)
    {
    case '+':
        printf("sum=%d",a+b);
        break;
    case '-':
        printf("substract=%d",a-b);
        break;
    case '*':
        printf("multiply=%d",a*b);
        break;
    default:
    printf("invalid operator");
    }
    return 0;

}