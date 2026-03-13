#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int max=INT_MIN;
    int sec = INT_MIN;
    
    
    
    for(int i=0;i<n;i++){
    
        if(max<arr[i]){
             sec=max;
            max=arr[i];
            
        }
        else if (arr[i] > sec && arr[i] != max) {
            sec = arr[i];
        }
    }
        
        if(sec == INT_MIN)
            return -1;
         
        return sec;
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    
    return 0;
}