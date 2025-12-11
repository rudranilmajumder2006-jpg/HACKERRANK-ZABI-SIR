#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(int a, int b, int c, int d){

     
    int n=(1000*a+100*b+10*c+d)*5;
     printf("The number is: %d",n);
    
    return 0;
    
}

int main(){
        int a;
    int b;
    int c;
    int d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    buildNumber(a,b,c,d);
    
}
