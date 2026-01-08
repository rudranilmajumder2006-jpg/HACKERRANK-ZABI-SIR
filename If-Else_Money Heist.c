#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,a,b,c;
    
    scanf("%d %d %d %d %d %d %d %d %d %d",&d0,&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9);
    
    for(c=0;c<3;c++){
        
    scanf("%d %d",&a,&b);
        
    if(a==0)
        d0=(d0+b)%10;
    else if(a==1)
        d1=(d1+b)%10;
    else if(a==2)
        d2=(d2+b)%10;
    else if(a==3)
        d3=(d3+b)%10;
    else if(a==4)
        d4=(d4+b)%10;
    else if(a==5)
        d5=(d5+b)%10;
    else if(a==6)
        d6=(d6+b)%10;
    else if(a==7)
        d7=(d7+b)%10;
    else if(a==8)
        d8=(d8+b)%10;
    else if(a==9)
        d9=(d9+b)%10;
     }
    printf("%d %d %d %d %d %d %d %d %d %d",d0,d1,d2,d3,d4,d5,d6,d7,d8,d9);
      
    
    return 0;
}