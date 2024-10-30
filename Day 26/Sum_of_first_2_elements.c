/*Que-1)
----------------
Given an array of integers, print the sum of the first 2 elements in the array.
If the array length is less than 2, just sum up the elements that exist,
print 0 if the array is having length 0.

Note: Read and print the element from the user with the index value also 
*/
#include <stdio.h>

int main(){
    int a[100],n,i,s=0;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    printf("Enter %d integers : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(a[i]==0){
        printf("0");
    }
    for(i=0;i<2;i++){
        
        s+=a[i];
    
    }
    printf("This is the Sum of first 2 elements = %d ",s);
    
    return 0;
}