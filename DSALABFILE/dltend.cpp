#include <iostream>
using namespace std;
int main()
{
    //------Deletion from the end------
    int arr[] = {12, 14, 19, 23, 16, 29, 32, 25, 33};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of elements are:" << n << endl;
    cout << "Array before Deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ",";
    // Deletion from end;
    n = n - 1;
    cout << "\nArray after Deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ",";
    return 0;
}
