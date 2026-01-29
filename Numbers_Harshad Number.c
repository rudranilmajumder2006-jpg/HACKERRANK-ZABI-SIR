#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,n1,n2,n3,n4,sum;
    scanf("%d",&n);
    
    n1=n/1000;
    n2=n/100-(n1*10);
    n4=n%10;
    n3=(n%100-n4)/10;
    sum=n1+n2+n3+n4;
    
    if( n%sum==0){
        printf("%d is a harshad number",n);
    }
    else{
        printf("%d is not a harshad number",n);
    }
    
    
    
    
    return 0;
}
