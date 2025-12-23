// Write a for loop that prints the first ten even numbers. Rewrite the same logic using a while loop and a do-while loop.

#include <iostream>
using namespace std;

int main()
{

    //for For loop
    /*
    int n;
    int count=0;

    for(n=1;count<10;n++){

    if(n%2==0){
        count++;
        cout<<n<<" ";
    }
    */

//for while loop
/*
int n=1;
int count=0;
while(count<10)
{
if(n%2==0){
    count++;
    cout<<n<<" ";

}
n++;

}
*/


//for do while


int n=1;
int count=0;
do{

if(n%2==0){
count++;
    cout<<n<<" ";
}
n++;
}while(count<10);

}
