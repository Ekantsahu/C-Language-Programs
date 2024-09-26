#include <stdio.h>
int main(){
    int num  ;
    int result;
    printf("Enter any number : ");
    scanf("%d",&num);

    result = (num*(num+1))/2;
    printf("%d",result);
    
    return 0;
}