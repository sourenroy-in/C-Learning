// Reverse Array in C
#include <stdio.h>

void reverse(int arr[], int n) {
  
    int front = 0; //First element
    int rear = n - 1; //Last element

    while (front < rear) {
      
        // Swap the elements
        int temp = arr[front];
        arr[front] = arr[rear];
        arr[rear] = temp;

        front++;
        rear--;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

  	// Reverse array arr
    reverse(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}