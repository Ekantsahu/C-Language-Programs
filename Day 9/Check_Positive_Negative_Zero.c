#include <stdio.h>

int main(){
    int n ;
    printf("Enter any number : ");
    scanf("%d",&n);

    if(n<0){
        printf("Negative Number");
    }else if(n==0){
        printf("Zero");
    }else{
        printf("Positive Number");
    }
}