#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int amt;
    scanf("%d",&amt);
    int a = 0;
    int b = 0;
    int c = 0;
    
    if(amt<=0){
        printf("Invalid amount");
        return 0;
    }
    
    else{
        for(int i=1;i<=amt/500;i++){
            a++;
        }
        amt = amt-500*a;
        for(int j = 1; j<=amt/200; j++)
        {
            b++;
        }
        amt = amt-200*b;
        for(int k=1; k<=amt/100;++k)
        {
            c++;
        }
    }
    
    
        printf("500-rupee notes: %d\n",a);
        printf("200-rupee notes: %d\n",b);
        printf("100-rupee notes: %d",c);
    
    return 0;
}
