#include <stdio.h>


int main() {
     
    int n,count,num,i;
    count=0;

    scanf("%d",&n);

    for (num=2; count<n;num++) 
    {
         for(i=2;i*i<=num;i++)
         {
            if (num%i == 0) 
             break;
        }

        if(i*i>num)
            count++;
    }

    printf("%d",num-1);
    return 0;
}