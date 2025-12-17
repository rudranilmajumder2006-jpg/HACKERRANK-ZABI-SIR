#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    scanf("%d",&N);
    if(N&1==1){
    printf("Odd");
    }
    else{
        printf("Even");
    }
    
    return 0;
}