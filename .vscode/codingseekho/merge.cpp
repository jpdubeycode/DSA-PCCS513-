#include<iostream>
#include<vector>
using namespace std;

void mergearray(int a[],int n,int b[],int m,int c[]){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        
        }
        else{
            c[k++]=b[j++];        }
    }

    while(i<n){
       c[k++]=a[i++];
    }
 while(j<m){
       c[k++]=a[j++];
    }
    for(int l=0;l<k;l++){
cout<<c[l]<<" ";
}
}
int main(){

int a[]={3,5,6,7,9};
int b[]={2,4,8};
int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(a[0]);
int c[m+n];

mergearray(a,n,b,m,c);

}