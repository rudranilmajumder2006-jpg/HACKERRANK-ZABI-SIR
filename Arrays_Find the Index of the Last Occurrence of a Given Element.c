#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int j=n-1;j>=0;j--)
    {
        if(a[j]==k)
        {
            printf("%d",j);
            return 0;
        }
    }
            printf("-1");
        
    return 0;
}
