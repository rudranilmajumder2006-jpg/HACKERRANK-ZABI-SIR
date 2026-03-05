#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    long long diff,even,odd;
    even=0;
    odd=0;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            even=even+a[i];
        }
        else{
            odd=odd+a[i];
        }
    }
    diff=even - odd;
    printf("%lld",diff);
    return 0;
}
