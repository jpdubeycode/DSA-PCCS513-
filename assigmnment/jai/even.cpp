#include<iostream>
using namespace std;

int main(){



int x;
cout<<"Enter any number"<<endl;
cin>>x;
int temp=x;

while(temp>1){
    temp=temp-2;
}
if(temp==0){
    cout<<x<<" is even no."<<endl;
}
else{
cout<<x<<" is odd no."<<endl;
}

// int d=x/2;
// int m=d*2;

// if(x==m)
// cout<<x<<" is even no."<<endl;
// else
//  cout<<x<<" is odd no."<<endl;


}
