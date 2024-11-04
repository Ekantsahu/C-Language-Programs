#include <stdio.h>

int main(){
     int a[100],n,i;

    printf("Enter the number of index: ");
    scanf("%d",&n);

    printf("Enter %d integer : ",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }

        if(count==1){
            printf("%d ",a[i]);
        }
    }
    return 0;
}