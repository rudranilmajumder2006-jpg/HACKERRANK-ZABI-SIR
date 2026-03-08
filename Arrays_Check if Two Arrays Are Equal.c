#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int M,N,i;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++){
        scanf("%d ",&A[i]);
    }
    scanf("%d",&M);
    int B[M];
    for(i=0;i<M;i++){
        scanf("%d ",&B[i]);
    }
    
    if(N != M){
        printf("Not Equal");
        return 0;
    }
    for(i=0;i<N;i++){
        if(A[i] != B[i]){
            printf("Not Equal");
            return 0;
        }
    }
    
    printf("Equal");
    return 0;
}
