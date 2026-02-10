#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long n;
    scanf("%ld",&n);
    long c=n&3;
    
     if(n>2147483647  || n< -2147483648){
        printf("Out of Range");
    }
    
    else if(c==0){
        printf("Divisible");
    }
    else if(c!=0 ){
        printf("Not Divisible");
    }
    
   
    
    return 0;
}
