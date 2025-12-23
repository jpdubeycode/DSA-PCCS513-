#include <stdio.h>

// Function to merge two halves
void merge(int arr[], int left, int mid, int right) {
    int i = left;      // starting index of left subarray
    int j = mid + 1;   // starting index of right subarray
    int k = 0;         // index for temporary array
    int temp[right - left + 1];

    // Merge both halves into temp[]
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // Copy remaining elements of left half
    while (i <= mid)
        temp[k++] = arr[i++];

    // Copy remaining elements of right half
    while (j <= right)
        temp[k++] = arr[j++];

    // Copy temp[] back into arr[]
    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

// Recursive function for merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
