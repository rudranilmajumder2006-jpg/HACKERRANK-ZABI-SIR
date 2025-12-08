#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    
    printf("The sum of last digits is: %d",a%10 + b%10);
    return 0;
}
