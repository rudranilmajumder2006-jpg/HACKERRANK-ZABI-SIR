#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,count,i;
    scanf("%d",&n);
    count=0;
    
    for(i=n;i>0;i=i/10){
        int c=i%10;
        if(n%c==0){
            ++count;
        }
    }
    printf("%d",count);
    return 0;
}
