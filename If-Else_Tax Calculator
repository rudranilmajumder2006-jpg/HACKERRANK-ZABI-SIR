#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float atm,tax;
    scanf("%f",&atm);
    
    if(atm>=0){
            if(atm<=250000){
            printf("0.00");
            }
            else if(atm>=250000 && atm<=500000){
                tax=(atm-250000)*0.05;
                printf("%0.2f",tax);
            }

            else if(atm>=500000 && atm<= 1000000){
                tax = (250000*0.05)+(atm-500000)*0.2; 
                printf("%0.2f",tax);
            }

            else if(atm>1000000){
                tax = (250000*0.05)+(500000*0.2)+(atm-1000000)*0.3;
                printf("%0.2f",tax);
            }
    }
    

    else{
        printf("INVALID");
    }
    return 0;
}