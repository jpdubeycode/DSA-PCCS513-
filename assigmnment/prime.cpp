#include<iostream>
using namespace std;

bool isprime(int n){

bool isprime=true;

if(n<=1)
{return false ;}
for(int i=2;i<n;i++)
{

if(n%i==0){
 
    return false;
}

}
return true;
}




int main(){
    
int n;
cout<<"Enter a number:";
cin>>n;

    if(isprime(n)){
        cout<<n<<" Prime number";
    }
else{
    cout<<"not prime number";
}






}