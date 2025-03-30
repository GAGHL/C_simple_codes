#include<stdio.h>

int n,sum;

int main(){
    while(1){
        printf("Enter N(enter 0 to close):");
        scanf("%d",&n);
        
        sum=0;
        
        if(n==0){
            printf("Closing...\n");
            break;
        }
        
        for(int i=1;i<=n;i++){
            sum+=i;
        }

        printf("Sum of numbers from 1 to %d is:%d\n",n,sum);
    }
    return 0;
}