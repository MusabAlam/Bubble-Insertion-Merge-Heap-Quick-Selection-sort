#include <stdio.h>

void merge_sort(int i, int j, int a[], int b[]) {
    if (j <= i) {
        return;
    }
    int mid = (i + j) / 2;


    merge_sort(i, mid, a, b);
    merge_sort(mid + 1, j, a, b);

    int left = i;
    int right = mid + 1;
    int k;

    for (k = i; k <= j; k++) {
        if (left == mid + 1) {
            b[k] = a[right];
            right++;
        }
        if (right == j + 1) {
            b[k] = a[left];
            left++;
        }
        if (a[left] < a[right]) {
            b[k] = a[left];
            left++;
        }
        else {
            b[k] = a[right];
            right++;
        }
    }

    for (k=i; k <= j; k++) {
         a[k] = b[k];
    }

}


int main() {
  int a[100], b[100], size, i;

  printf("Enter number of elements in the array:\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (i = 0; i < size; i++)
    scanf("%d", &a[i]);

  merge_sort(0, size - 1, a, b);

  printf("Printing the sorted array:\n");

  for (i = 0; i < size; i++)
     printf("%d\n", a[i]);

  return 0;
}
