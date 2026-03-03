#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    long long min=a[0];
    long long max=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%lld ",max);
    printf("%lld",min);
    
    
    
    

    return 0;
}