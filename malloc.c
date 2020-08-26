#include<stdlib.h>
#include<stdio.h>
main()
{
    int *ptr;
    int n , i;
    n=5;
    printf("Number of elements in the array");
    ptr=(int*)malloc(n*sizeof(int));
    //if due to insufficient memory ,ptr will return null
    if(ptr==NULL)
    {
        printf("memory not alllocated");
    }
    else
    //if the memory has been allocated succesfully
        for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }
}
