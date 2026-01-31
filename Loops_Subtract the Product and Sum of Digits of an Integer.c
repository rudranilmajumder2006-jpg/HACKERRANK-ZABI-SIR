#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,n1,n2,n3,n4,n5,n6,product,diff,sum;
    scanf("%d",&n);
    
    n1=n%10;
    n2=(n/10)%10;
    n3=(n/100)%10;
    n4=(n/1000)%10;
    n5=(n/10000)%10;
    n6=(n/100000);
    
    if(n6>0 && n5>=0 && n4>=0 && n3>=0 && n2>=0 && n1>=0){
        product=n1*n2*n3*n4*n5*n6;
        sum=n1+n2+n3+n4+n5+n6;
        diff= product - sum;
    }
    else if(n5>0 && n4>=0 && n3>=0 && n2>=0 && n1>=0){
        product=n1*n2*n3*n4*n5;
        sum=n1+n2+n3+n4+n5;
        diff= product - sum;
    }
    else if( n4>0 && n3>=0 && n2>=0 && n1>=0){
        product=n1*n2*n3*n4;
        sum=n1+n2+n3+n4;
        diff= product - sum;
    }
    else if(n3>0 && n2>=0 && n1>=0){
        product=n1*n2*n3;
        sum=n1+n2+n3;
        diff= product - sum;
    }
    else if( n2>0 && n1>=0){
        product=n1*n2;
        sum=n1+n2;
        diff= product - sum;
    }
    else if(n1>=0){
        product=n1;
        sum=n1;
        diff= product - sum;
    }
    
    
    printf("%d",diff);
    
    return 0;
}
