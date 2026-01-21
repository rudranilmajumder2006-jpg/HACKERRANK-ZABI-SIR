#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;
    scanf("%d\n",&n);
    int a,d;
    scanf("%d %d",&a,&d);
    
    for(int i=1;i<=n;++i){
        
        printf("%d ",a+(i-1)*d);
    }
    
    return 0;
}