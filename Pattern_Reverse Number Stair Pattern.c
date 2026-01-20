#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            int a=j-i+1;
            
            if(a>=1){
            printf("%d ",a);
            }
        }
        printf("\n");
    }
    
    return 0;
}
