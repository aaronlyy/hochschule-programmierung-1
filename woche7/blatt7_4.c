#include <stdio.h>

void reverse(int arr[], int n);


int main() {

  int arr[] = {1,2,3};
  reverse(arr, 3);
  for (int i = 0; i < 3; i++) {
    printf("%d, ", arr[i]);
  }

  printf("\n");

  int arr2[] = {7,6,5,4,6,7,8,9,2,10};
  reverse(arr2, 10);
  for (int i = 0; i < 10; i++) {
    printf("%d, ", arr2[i]);
  }

  printf("\n");

}

void reverse(int arr[], int n) {
  int temp[n];

  for (int i = 0; i < n; i++) {
    temp[n-1-i] = arr[i];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = temp[i];
  }
}