#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"please enter the number:";
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int max=arr[0];
    int min=arr[0];

    for(int i=0;i<n;i++){
        sum=sum+arr[i];

        if(arr[i]>max){
            max=arr[i];
        }

      
        if(arr[i]<min){
           min=arr[i];
       }
    }
        cout<<"sum:"<<sum<<endl;
        cout<<"max:"<<max<<endl;
        cout<<"min:"<<min<<endl;

}
