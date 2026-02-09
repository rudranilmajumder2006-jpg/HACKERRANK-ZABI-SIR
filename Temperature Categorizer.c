#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int temp;
    scanf("%d",&temp);
    
    if(temp<0){
        printf("Freezing");
    }
    else if(temp>=0 && temp<=30){
        printf("Normal");
    }
    else if(temp>30){
        printf("Hot");
    }
    
    return 0;
}
