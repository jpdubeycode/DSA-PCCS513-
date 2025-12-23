// Write a C program using a while loop to take input from the user until a negative number is entered, then print the sum of all entered positive numbers.
//    - Modify your solution using a do-while loop and explain how the behavior changes.
#include<iostream>
using namespace std;

int main(){

int n=0;
// cout<<"Enter a first number:";
// cin>>n;
int sum=0;
// sum=sum+n;
while(n>=0){    

cout<<"enter number:";
cin>>n;
if(n>0)
sum=sum+n;


}

cout<<"Sum is:"<<sum;






}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int sum = 0;

//     cout << "Enter numbers (loop will stop when you enter a negative number):" << endl;

//     do {
//         cin >> n;
//         if (n > 0) {
//             sum += n;
//         }
//     } while (n >= 0);

//     cout << "Sum of positive numbers = " << sum << endl;
//     return 0;
// }



