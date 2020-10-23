#include<stdio.h>

    int linear_search(int arr[],int n,int x)
    {
        
        int i;
        for ( i = 0; i < n; i++)
            if(arr[i]==x)
            return i;
        return -1;   
    }
main()
{
    int arr[]={1,2,3,4,5};
    int x;
    int result;
    printf("Array contains: 1 ,2 ,3 ,4, 5: \n");
    printf("enter the element to search: \n");
    scanf("%d",&x);
    int n=sizeof(arr)/sizeof(arr[0]);
    result=linear_search(arr,n,x);
    (result==-1)
    ?printf("element not present")
    :printf("Element %d is at %d index position",x,result);
}
    