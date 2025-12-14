#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a%10;
    d=b%10;
    if(c==d){
        printf("YES");
    }
    else if(c!=d){
        printf("NO");
    }
    return 0;
}
