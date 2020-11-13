#include<stdio.h>
int a[10],i,j,n,temp;
void isr(int a[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++){
    key=a[i];
    j=i-1;
    while(j>=0 && a[j]>key)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
}
void main()
{
printf("Enter the size of an array : \n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
isr(a,n);
printf("Sorted array is : \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);

}
// https://www.youtube.com/watch?v=ep8uG1IBApQ //