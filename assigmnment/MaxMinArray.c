#include <stdio.h>     // for printf()
#include <limits.h>    // for INT_MIN and INT_MAX constants

int main() {
    // Declare and initialize the array with 7 elements
    int arr[] = {5, 66, 33, 54, 6, 78, 2};

    // Calculate the number of elements in the array
    // sizeof(arr) = total size of array in bytes
    // sizeof(arr[0]) = size of one element (first element)
    // dividing gives number of elements in array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize max and min
    // INT_MIN = smallest possible int value (e.g., -2147483648)
    // INT_MAX = largest possible int value (e.g., 2147483647)
    // This ensures first comparison will always replace them with real values
    int max = INT_MIN;
    int min = INT_MAX;

    // Loop through all elements of the array
    for (int i = 0; i < n; i++) {
        // If current element is smaller than min, update min
        if (min > arr[i]) {
            min = arr[i];
        }
        // If current element is greater than max, update max
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    // Print the minimum and maximum values found
    printf("Minimum number in array is: %d\n", min);
    printf("Maximum number in array is: %d\n", max);

    return 0; // Program finished successfully
}
