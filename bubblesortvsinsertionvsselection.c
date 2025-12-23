#include <stdio.h>

// Optimized Bubble Sort
int bubbleSort(int arr[], int n) {
    int comparisons = 0;
    for (int i = 0; i < n-1; i++) {
        int swapped = 0;
        for (int j = 0; j < n-i-1; j++) {
            comparisons++;
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }
    return comparisons;
}

// Insertion Sort
int insertionSort(int arr[], int n) {
    int comparisons = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        
        comparisons++;
        while (j >= 0 && arr[j] > key) {
            comparisons++;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return comparisons;
}

// Selection Sort  
int selectionSort(int arr[], int n) {
    int comparisons = 0;
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    return comparisons;
}

int main() {
    int sorted_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(sorted_arr) / sizeof(sorted_arr[0]);
    
    int arr1[n], arr2[n], arr3[n];
    
    // Copy arrays
    for(int i=0; i<n; i++) {
        arr1[i] = sorted_arr[i];
        arr2[i] = sorted_arr[i]; 
        arr3[i] = sorted_arr[i];
    }
    
    printf("Array size: %d\n", n);
    printf("Already sorted array: [1, 2, 3, ..., 10]\n\n");
    
    int comp1 = bubbleSort(arr1, n);
    printf("Bubble Sort Comparisons: %d (O(n))\n", comp1);
    
    int comp2 = insertionSort(arr2, n); 
    printf("Insertion Sort Comparisons: %d (O(n))\n", comp2);
    
    int comp3 = selectionSort(arr3, n);
    printf("Selection Sort Comparisons: %d (O(n²))\n", comp3);
    
    return 0;
}
