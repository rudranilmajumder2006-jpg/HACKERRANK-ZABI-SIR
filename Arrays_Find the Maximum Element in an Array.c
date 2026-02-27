#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int max=a[0];
    for(i=1; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    printf("%d",max);
    
    return 0;
}
