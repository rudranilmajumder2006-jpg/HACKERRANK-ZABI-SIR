#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int k;
    int count = 0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(k==a[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}