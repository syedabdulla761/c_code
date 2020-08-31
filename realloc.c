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
    n=10;
    printf("\nNew size of the array %d",n);
    ptr=realloc(ptr,n*sizeof(int));
    printf("\nMemory successfully re-allocated using realloc");
    for(i=5;i<n;i++)
    {
        ptr[i]=i+1;
    }
    printf("\nMemory succesfully re-allocated=");
        for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }
    free(ptr);
}
// https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/