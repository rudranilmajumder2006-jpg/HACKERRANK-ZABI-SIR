#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


float discounted(){
        float price,discountAmount,percent;
    scanf("%f%f",&price,&percent);
     discountAmount = ( price * percent ) / 100;
    float discountedPrice = price - discountAmount;
    
    printf("The final price is: %f",discountedPrice);
    return 0;
   
    
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
 discounted();
    return 0;

    

}
