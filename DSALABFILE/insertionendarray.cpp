#include<iostream>
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
    //------insertion at the end-----
    int arr[]={11,16,23,15,34,28,21,39,18};
    int n,num;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Number of elements are:"<<n<<endl;
    cout<<"Array before Insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<"\nEnter the element:";
    cin>>num;
    n=n+1;
    cout<<n<<endl;
    int k=n-1;
    arr[k]=num;
    cout<<"Array after insertion: ";
        for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<",";
    }
}
