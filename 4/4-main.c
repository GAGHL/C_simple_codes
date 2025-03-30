#include <stdio.h>

int num;

int main(){
    
    while(1){
        printf("\nPlease enter number(enter 0 to close):");
        scanf("%d",&num);

        if(num==0){
            printf("Closing...\n");
            break;
        }

        if(num%5==0 && num%7==0){
                printf("YES.The number is divisible by both 5 and 7");
        }else{
                printf("NO.The number is not divisible by both 5 and 7");
        }
    }
    return 0;
}
