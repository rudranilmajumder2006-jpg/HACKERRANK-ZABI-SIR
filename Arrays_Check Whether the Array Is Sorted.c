#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    int isAscending=1;
    int isDescending=1;
    
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-2;i++){
        if(a[i]<a[i+1]){
            isAscending=0;
        }
        else if(a[i]>a[i+1]){
            isDescending=0;
        }
         
    }
     if(isDescending==1){
        printf("Ascending");
    }
    else if(isAscending==1){
        printf("Descending");
    }
    
    else{
        printf("Not Sorted");
    }
    return 0;
}
