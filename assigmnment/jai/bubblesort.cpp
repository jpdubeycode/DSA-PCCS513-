#include<iostream>
using namespace std;

int main(){

int arr[]={5,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);


int i,j;
 int swapped;
for(i=0;i<n-1;i++){

    swapped=0;

    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1])
        {
        swap(arr[j],arr[j+1]);
          swapped=1;}
    }
  
    if(swapped==0){
    cout<<"array already sorted"<<endl;
    break;
}
}


cout<<"after sorting"<<endl;
for(int k=0;k<4;k++){
    cout<<arr[k]<<" ";
}



}