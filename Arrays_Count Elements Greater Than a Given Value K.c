#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int count =0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(a<arr[i]){
            count++;
        }
    }
    printf("%d",count);
    
    
    
    return 0;
}
