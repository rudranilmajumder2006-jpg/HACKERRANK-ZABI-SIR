#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,min,second;
    second=INT_MAX;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  
    min=a[0];
 
    for(int i=1;i<n;++i)
    {
        if(min>a[i])
        {  
            second=min;
            min=a[i];
        }
        else if(a[i]>min && a[i]<second)
        {
            second=a[i];
        }
 
    }
    if(second==INT_MAX)
    {
        printf("-1");
    }
    else
    printf("%d",second);
   
    return 0;
}
