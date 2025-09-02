#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"plese!enter the number:";
    cin>>n;

    int arr[100];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    double average=double(sum)/n;

    cout<<"sum :"<<sum<<endl;
     cout<<"average :"<<average<<endl;
     return 0;
    

}