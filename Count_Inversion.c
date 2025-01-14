#include <stdio.h>

int countInversions(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int arr[] = {7,2,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Number of inversions: %d\n", countInversions(arr, n));
    return 0;
}
