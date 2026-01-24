#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    scanf("%d",&n);
    
    for(int i=1;i>=1;i++){
        
        if(i==1)
        {
            printf("%d",n);
        }
      
        else if(n%2==0){
            printf(" -> %d",n=n/2);
        }
        else{
            printf(" -> %d",n=3*n +1);
            
        }
        
        if(n==1)
        {
            break;
        }
    }
    return 0;
}