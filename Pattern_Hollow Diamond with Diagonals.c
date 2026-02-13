#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    if(n>=2 && n<=50){
    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            if(j-i==n-1||i-j==n-1||i+j==n+1||i+j==3*n-1||i==n||j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    }
    
    else if(n<2 || n>50){
        printf("Shape Not Possible");
    }
    
    
    return 0;
}