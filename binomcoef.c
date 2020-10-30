#include<stdio.h>

int binomial_coeff(int n , int k)
{
    if(k==0 || k==n)    //standard formula for binary coeff C(n, k) = C(n-1, k-1) + C(n-1, k)  or if C(n, 0) = C(n, n) = 1 //
       return 1;
    
    return binomial_coeff(n-1 , k-1)+binomial_coeff(n-1 , k);
}
int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b );
    printf("%d",binomial_coeff(a,b));
    return 0;
}