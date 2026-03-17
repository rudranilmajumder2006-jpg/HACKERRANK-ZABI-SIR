#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int flag =1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            flag=0;
            
        
           
    }
    
    if(flag==0){
        printf("Not Sorted");
    }
    else if(flag==1){
        printf("Sorted");
    }
    
    return 0;
}
