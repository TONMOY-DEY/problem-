#include<iostream>
using namespace std;

int main(){
    int arr[]={10,5,40,20,30};
    int n=5;

    int maxval=arr[0];
    int minval=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>maxval)
        maxval=arr[i];
        
    for(int i=0;i<n;i++){
        if(arr[i]<minval)
       minval=arr[i];
    }
    cout<<"max:"<<maxval<<endl;
    cout<<"MIn:"<<minval;
}