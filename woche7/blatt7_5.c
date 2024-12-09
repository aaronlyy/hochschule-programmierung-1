#include <stdio.h>

void swap(int a[], int b[], int len);

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int b[5] = {10, 20, 30, 40, 50};

  swap(a, b, 5);

  for (int i = 0; i < 5; i++) {
    printf("a: %d\n", a[i]);
  }

  for (int i = 0; i < 5; i++) {
    printf("b: %d\n", b[i]);
  }

}

void swap(int a[], int b[], int len) {
  int a_copy[len];

  for (int i = 0; i < len; i++) {
    a_copy[i] = a[i];
  }

  for (int i = 0; i < len; i++) {
    a[i] = b[i];
  }

  for (int i = 0; i < len; i++) {
    b[i] = a_copy[i];
  }
}