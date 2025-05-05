#include <stdio.h>

void rotateLeft(int arr[], int n, int k) {
  // Normalize k to handle cases where k > n or k < 0
  // k = (k % n + n) % n;

  // Temporary array to store the first k elements
  int temp[k];

  // Copy the first k elements to the temporary array
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }

  // Shift the remaining elements to the left
  for (int i = k; i < n; i++) {
    arr[i - k] = arr[i];
  }

  // Copy the elements from the temporary array to the end of the original array
  for (int i = 0; i < k; i++) {
    arr[n - k + i] = temp[i];
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 3;

  printf("Original array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  rotateLeft(arr, n, k);

  printf("Rotated array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}