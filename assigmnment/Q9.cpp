//  Perform a binary search on the following sorted array: {5, 9, 15, 23, 34, 45, 59, 72, 88, 99}.
//    - Show the search steps if the key = 72.

#include<iostream>
 using namespace std;

int BinarySearch(int array[],int size,int key){


int start=0;
int end=size-1;

int mid=(start+end)/2;
while(start<=end){
    if(array[mid]==key){
        return mid;
    }
else if(array[mid]>key){
end=mid-1;
    
}
else{
start=mid+1;
}
mid=(start+end)/2;
}

return -1;
}



int main(){

int array[]= {5, 9, 15, 23, 34, 45, 59, 72, 88, 99};
int size=sizeof(array)/sizeof(array[1]);

 int key=72;
 int k=BinarySearch(array,size,72);
if(k!=-1)
 cout<<"number is found at index "<<k;
else
cout<<"number is not found";


 } 