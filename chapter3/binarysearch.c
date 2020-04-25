#include <stdio.h>

int binarysearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low+high)/2;
    if (x < v[mid]) {
      high = mid + 1;
    } else if (x > v[mid]) {
      low = mid + 1;
    } else {
      return mid;
    }
  }
  return -1;
}

int main(int argc, char* argv[]){
  int nums[] = {1, 2, 7, 9, 10, 12, 22, 28, 39, 66};
  int result = binarysearch(22, nums, 10);
  printf("%d", result);
}
