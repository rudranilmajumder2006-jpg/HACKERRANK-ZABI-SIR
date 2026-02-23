#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    if(n>0){
    int a[n];
    long long sum=0;
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
        
    printf("%lld",sum);
    }
    
    else{
        printf("invalid");
    }
    return 0;
}
