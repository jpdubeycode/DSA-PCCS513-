#include<iostream>
using namespace std;
int main(){
    //------Deletion from the Middle------
    int arr[]={12,1,31,67,34,56,34,55,4,23};
    int n,pos;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array is: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<",";
    cout<<"\nEnter the Index which you want to remove:";
    cin>>pos;
    n=n-1;
    for(int i=pos;i<n;i++)
    arr[i]=arr[i+1];
    cout<<"New array is: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<",";
    return 0;
}

