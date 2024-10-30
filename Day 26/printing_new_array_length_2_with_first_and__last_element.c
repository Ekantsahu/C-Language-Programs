/*
Que-3)
_________________
Given an array of integer , print a new array length 2 containing the first and
last elements from the original array. The original array will be length 1 or more
otherwise print not a valid declaration ?

Print the original array and the new array element 

*/
#include <stdio.h>

int main(){
    int a[3]={1,2,3};
    int b[3]={1,9,3};

    int new_array[2]={a[0],b[2]};

   for(int i=0;i<2;i++){
    printf("%d ",new_array[i]);
   }
    return 0;
}