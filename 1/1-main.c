#include <stdio.h>

float first,second,sum,sub,mul,div;

int main(){
    while(1){
        printf("\nPlease enter number(enter 0,0 for close):");
        scanf("%f",&first);
        printf("Please enter number:");
        scanf("%f",&second);

        if(first==0 && second==0){
            printf("Closing...");
            break;
        }

        sum=first+second;
        printf("\nSummation:%.0f",sum);

        sub=first-second;
        printf("\nSubtraction:%.0f",sub);

        mul=first*second;
        printf("\nMultiply:%.0f",mul);

        if(second==0){
            printf("\nDivision:UNDEFIEND");
        }else{
            div=first/second;
            printf("\nDivision:%.2f\n",div);
        }
    }
    return 0;
}