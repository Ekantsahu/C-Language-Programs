#include <stdio.h>

int main(){
     int a[100],n,i,element,index;

    printf("Enter the number of index: ");
    scanf("%d",&n);

    printf("Enter %d integer : ",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

     printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    printf("Enter the index you want to insert: ");
    scanf("%d", &index);   

    index--;

    for(int i = n; i  >= index; i--){
        a[i] = a[i - 1];
    }

    a[index] = element;
    n++;

    printf("New Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }


    return 0;
}