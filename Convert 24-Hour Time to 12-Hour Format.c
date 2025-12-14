#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int h,m;
    scanf("%d %d",&h,&m);
    if(m>=10){
        
     if(h==0)
     {
         printf("12:%d AM",m);
     }
    else if(h<12 && h>00)
    {
        printf("%d:%d AM",h,m);
    }
    else if(h==12)
    {
        printf("12:%d PM",m);
    }
    else if (h>12 && h<=24)
    {
        h=h-12;
        printf("%d:%d PM",h,m);
    }

    }
    else{
          if(h==0)
     {
         printf("12:0%d AM",m);
     }
    else if(h<12 && h>00)
    {
        printf("%d:0%d AM",h,m);
    }
    else if(h==12)
    {
        printf("12:0%d PM",m);
    }
    else if (h>12 && h<=24)
    {
        h=h-12;
        printf("%d:0%d PM",h,m);
    }

    }
}