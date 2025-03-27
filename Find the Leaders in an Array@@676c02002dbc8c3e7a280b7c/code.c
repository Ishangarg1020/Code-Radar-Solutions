#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int leaders[n];
    int index = 0;
    int maxFromRight = arr[n - 1];
    leaders[index] = maxFromRight;
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            index++;
            leaders[index] = maxFromRight;
        }
    }
    
    for (int i = index; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    // printf("\n");
    
    // findLeaders(arr, n);
    return 0;
}