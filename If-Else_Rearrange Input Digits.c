#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void decreasing3(int d1,int d2,int d3);
    void decreasing2(int d1,int d2);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N,n1,n2,n3,n4;
    scanf("%d",&N);
    
    n1=N/1000;
    n2=(N/100)-(N/1000)*10;
    n3=(N%100)/10;
    n4=N%10;
    
    if((n1>=n2)&&(n1>=n3)&&(n1>=n4)){
        printf("%d",n1);
        decreasing3( n2, n3, n4);
        
    }
    else if((n2>=n1)&&(n2>=n3)&&(n2>=n4)){
        printf("%d",n2);
        decreasing3( n1, n3, n4);
        
    }
    else if((n3>=n1)&&(n3>=n2)&&(n3>=n4)){
        printf("%d",n3);
        decreasing3( n1, n2, n4);
    
    }
    else if((n4>=n1)&&(n4>=n2)&&(n4>=n3)){
        printf("%d",n4);
        decreasing3( n2, n3, n1);
        
    }
    
    return 0;
}

void decreasing3(int d1,int d2,int d3){
    if((d1>=d2)&&(d1>=d3)){
        printf("%d",d1);
        decreasing2(d2,d3);
    }
    else if((d2>=d1)&&(d2>=d3)){
        printf("%d",d2);
        decreasing2(d1,d3);
    }
    else if((d3>=d1)&&(d3>=d2)){
        printf("%d",d3);
        decreasing2(d1,d2);
    }
}

void decreasing2(int d1,int d2){
    if(d1>=d2){
        printf("%d",d1);
        printf("%d",d2);
    }
    else{
        printf("%d",d2);
        printf("%d",d1);
    }
}
