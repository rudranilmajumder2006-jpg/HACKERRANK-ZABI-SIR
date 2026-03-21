#include <stdio.h>

void reverseArray(int arr[], int n) {
    int b[n];
    // Implement the function to reverse the array in-place
    for(int i=0;i<n; ++i){
        
        b[i]=arr[n-i-1];
    }
    for(int i=0; i<n; ++i){
        arr[i]=b[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}