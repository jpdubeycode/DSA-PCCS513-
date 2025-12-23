#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void device_name_and_time()
{
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);
    if (GetComputerName(computerName, &size))
    {
        cout << "\nSystem Name: " << computerName << endl;
    }
    time_t now = time(0);
    char *date_time = ctime(&now);
    cout << "The current date and time is: " << date_time << endl;
}
int main(){
        int arr[100], n, i, j, count;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Unique elements in the array are:\n");
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    device_name_and_time();
      return 0;
}
