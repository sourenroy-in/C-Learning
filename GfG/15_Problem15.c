// Remove Duplicates from Sorted Array
#include <stdio.h>

int removeDup(int arr[], int n, int final[]) {

    if (n == 0) 
    return 0;
    
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
      
        if (arr[i] != arr[i + 1])
            final[j++] = arr[i];
    }
    // last element is always sorted
    final[j++] = arr[n - 1];
  
    return j;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
  	int u[n];


    int m = removeDup(arr, n, u);

    for (int i = 0; i < m; i++) {
        printf("%d ", u[i]);
    }
  
    return 0;
}