#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a=1;
    
    if(n<=0)
        return 0;
    
    printf("<");
    for(int i=1;i<=n;i++){
        printf("%d",a);
        if(i != n)
         printf(" ");
       
        a=a*2;
    }
    
    
    printf(">");
    
    
    return 0;
}