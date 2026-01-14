#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    
    if(n%2==0){
        printf("%d",n);
    }
    
    else if(n%2!=0){
        printf("%d",n*2);
    }
    
    
    return 0;
}
