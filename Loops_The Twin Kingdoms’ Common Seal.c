#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A,B,i;
    scanf("%d %d",&A,&B);
    int C;
    if(A<B){
        C=B;
    }
    else{
        C=A;
    }
    
    for(i=C;i>=0;--i){
        if(A%i==0 && B%i==0){
            break;
        }
    }
    printf("%d",i);
    
    return 0;
}
