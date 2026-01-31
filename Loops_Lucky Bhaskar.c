#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x,n,i;
    double y,minamt;
    int flag=0;
    
    scanf("%d %d",&x,&n);
    
    y=x;
    minamt=x;
    
    for(i=1;i<=n;++i)
    {
        if(i%2==0 && i%3==0)
        {
            y= y*1.7;
            i=i+6;
        }
        else if(i%2==0)
        {
            y=y*0.875;     
        }
        else if(i%3==0)
        {
            y=y*0.8;
        }
        else
        {
            y=y*0.9;
        }
        
        if(y<minamt)
        {
            minamt=y;
        }
       
        
        if(y<0.4*x)
        {
            flag=1;
            break;    
        }
        
    }
    
    if(flag==1 && i!=n && i!=0)
    {
        printf("Stopped early after %d days: %.2f\n",i,y);
    }
    else
    {
        printf("After %d days: %.2f\n",n,y);
    }
    
    printf("Minimum amount held by Bhaskar: %.2f\n",minamt);
    
    if(y>=0.7*x)
    {
       printf("Lucky Bhaskar\n"); 
    }
    else
    printf("Better Luck Next Time!\n");
    
    return 0;
}