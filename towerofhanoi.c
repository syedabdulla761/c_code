#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of discs: \n");
    scanf("%d",&n);
    tower(n,'s','d','t');
    return 0;

}
void tower(int n,char source,char dest,char temp)
{
    if(n==1)
    {
        printf("Move disk %d from %c to %c\n",n,source,dest);
        return;
    }
    
    {
        tower((n-1), source , temp , dest);  //keeping source at same position and interchanging dest and temp positions//
        printf("Move disk %d from %c to %c\n",n,source,dest);
        tower((n-1) , temp , dest , source);  //keeping the dest at same position//
    }
    
}