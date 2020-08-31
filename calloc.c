#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,i;
    int *ptr;
    n=5;
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
         for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        for(i=0;i<n;i++)
        {
            printf("%d",ptr[i]);
        }
    }
    printf("\nMemory allocated");
    free(ptr);
    printf("\nMemory freed");
}