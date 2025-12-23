#include<iostream>
using namespace std;
int main(){
    //------Deletion from the Beginning------
    int arr[]={12,1,31,67,34,56,34,55,4,23};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array is: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<",";
    n=n-1;
    for(int i=0;i<n;i++)
    arr[i]=arr[i+1];
    cout<<"\nNew array is: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<",";
    return 0;
}
