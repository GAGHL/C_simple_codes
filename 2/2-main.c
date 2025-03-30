#include <stdio.h>

float celsius,fahrenheit;

int main(){
    while(1){
        printf("\nPlease enter temperature in Celsius(enter 0 to closing):");
        scanf("%f",&celsius);
        
        if(celsius==0){
            printf("Closing...\n");
            break;
        }
        
        fahrenheit=(celsius*9/5)+32;
        printf("\nTemperature in Fahrenheit:%.2f\n",fahrenheit);
    }
    return 0;
}
