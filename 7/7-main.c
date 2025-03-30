#include<stdio.h>

int n,fact;

int main(){
    while(1){
        printf("Enter N(enter 0 to close):");
        scanf("%d",&n);
        
        fact=1;
        
        if(n==0){
            printf("Closing...\n");
            break;
        }
        
        for(int i=1;i<=n;i++){
            fact*=i;
        }

        printf("Factorial of %d is:%d\n",n,fact);
    }
    return 0;
}
