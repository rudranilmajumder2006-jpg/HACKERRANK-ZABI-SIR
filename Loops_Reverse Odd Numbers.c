#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    int n;
    scanf("%d",&n);
    for(int i=2*n-1;i>=1;i=i-2){
        printf("%d",i);
        if(i>1){
            printf(" ");
        }
        else{
            printf(".");
        }
    }
    return 0;
}