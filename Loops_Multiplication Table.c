#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=10;++i){
       int product=n*i;
        
        printf("%d x %d = %d\n",n,i,product);
    }
    
    return 0;
}