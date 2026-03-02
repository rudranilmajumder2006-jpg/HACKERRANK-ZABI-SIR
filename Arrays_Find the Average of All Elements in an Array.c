#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;
    scanf("%d",&n);
    int a[n];
    
    double sum;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    
    double avg=sum/n;
    printf("%lf",avg);
    
    return 0;
}
