#include<stdio.h>
int main(){
    int a,b,c,x;
    printf("Enter three co-efficient");
    scanf("%d%d%d",&a,&b,&c);
    x=b*b-4*a*c;
    if(x>0)
    {
        printf("Roots are real and distinct ");
        }
    else if(x<0)
    {
        printf("Roots are complex and different");
    }
    else if(x==0)
    {
        printf("Roots are real and equal");
    }
    return 0;    
}