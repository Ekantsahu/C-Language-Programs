#include <stdio.h>

int main(){
    int a ;
    int b ;
    printf("Enter the number : ");
    scanf("%d %d",&a,&b);
    
    if(a>b){
        printf("Maximum = %d",a);
    }
    if(b>a){
        printf("Maximum = %d",b);
    }
}