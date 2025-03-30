#include <stdio.h>

float first,second,third,max,min;

int main(){
    while(1){
        printf("\nPlease enter number(enter 0,0,0 to close):");
        scanf("%f",&first);
        printf("Please enter number:");
        scanf("%f",&second);
        printf("Please enter number:");
        scanf("%f",&third);

        if(first==0 && second==0 && third==0){
            printf("Closing...");
            break;
        }

        max=first;
        if (second>max) max=second;
        if (third>max) max=third;

        min=first;
        if(second<min) min=second;
        if(third<min) min=third;

        printf("\nMaximum:%.2f", max);
        printf("\nMinimum:%.2f", min);
    }
    return 0;
}