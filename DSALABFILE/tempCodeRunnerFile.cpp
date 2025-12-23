#include<iostream>
#include<windows.h>
#include<ctime>
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
    cout << "The current date and time is: " << date_time <<endl;
}
int main() {
    //------Insertion in middle------

    int arr[100] = {3,4,13,35,71,32,76};  // bigger size array
    int n, num, pos;  
    n = 7; // actual number of elements

    cout << "Number of elements are: " << n << endl;
    cout << "Enter the index and Element: ";
    cin >> pos >> num;

    // Shifting the elements by 1 from end upto pos
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    n++; 
    for (int i = 0; i < n; i++)
        cout << arr[i] << ",";
   device_name_and_time();
    return 0;
}
