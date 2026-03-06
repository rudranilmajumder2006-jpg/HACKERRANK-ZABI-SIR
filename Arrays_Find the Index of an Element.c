#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
    }
    int m;
   scanf("%d", &m);
    for(int i=0; i<n; i++){
        if(a[i]==m){
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}