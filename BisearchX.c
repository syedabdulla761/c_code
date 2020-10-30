#include<stdio.h>
int binary_search(int arr[] , int f , int l , int x)
{
        if(l>=f)
{
        int mid=(l+1)/2 ;

        if(arr[mid]==x)
          return mid;
        
        else if(arr[mid]<x)
          return binary_search(arr , mid+1 , l , x );
        else 
          return binary_search(arr , f , mid-1 , x );
}
          return -1;
}
int main(void)
{
  int arr[]={1,2,3,4,5,6,7,8,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x;
  printf("Enter the number to b searched : \n");
  scanf("%d",&x);
  int result=binary_search(arr , 0 , n-1 , x);
  (result==-1)
  ?printf("Element not present in array \n")
  :printf("%d is present at index position : %d ",x,result);
  return 0;
  
}