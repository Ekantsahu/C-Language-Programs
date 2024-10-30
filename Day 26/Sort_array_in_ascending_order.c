 /*
 Que-4)
__________________
Read the element from the user inside the array in unorder manner and sort the 
array in ace order by the general way of sorting?

Print the array before sorting as well as after sorting 

 */
 #include <stdio.h>
 
 int main(){
    int a[100],n,i,temp;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    printf("Enter %d integers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++) {   
        for (int j = i+1; j < n; j++) {   
           if(a[i] > a[j]) {  
               temp = a[i];  
               a[i] = a[j];  
               a[j] = temp;  
           }   
        }   
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);  
    return 0;
 }