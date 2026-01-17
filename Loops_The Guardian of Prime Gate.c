#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int flag=1;
    scanf("%d",&n);
    
    if(n<=1){
        printf("None");
        flag=0;
    }
    
    for(int i=2;i<=n-1;i++){        
        if(n%i==0){
            printf("Composite");
            flag=0;
            break;
        } 
    }
    
      if(flag==1){
            printf("Prime");
      }
    
          
        
    return 0;
}
