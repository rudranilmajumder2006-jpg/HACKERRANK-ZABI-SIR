#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,j;
    scanf("%d",&n);
    int arr[n];
    int sum1=0;
    int sum2=0;
    for(int i=1;i<=n-1;i++){
        scanf("%d",&arr[i]);
        sum1 = sum1+arr[i];
    }
    for(j=1;j<=n;j++){
        sum2 = sum2 + j;
        }
     printf("%d",sum2-sum1);
    return 0;
}