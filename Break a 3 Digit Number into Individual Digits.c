#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int n)
{
    
    int x=n/100;
    int y= n/10 - (n/100)*10;
    int z =n%10;
    printf("%d %d %d",x,y,z);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    split(n);
    
    return 0;
}
