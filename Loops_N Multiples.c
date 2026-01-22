#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n,a;
    scanf("%d %d",&n,&a);
    
    for(int i=1;i<=n;i++){
        printf("%d ",a*i);
    }
    
    
    return 0;
}