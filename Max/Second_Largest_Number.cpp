#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"please!! Enter the number:";
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest_number=arr[0];
    int Second_Largest_Number=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>largest_number){
        Second_Largest_Number=largest_number;
        largest_number=arr[i];
        
    }
    else if(arr[i]>Second_Largest_Number && arr[i]<largest_number){
        Second_Largest_Number=arr[i];
    }
}
cout<<"second largest number:"<<Second_Largest_Number<<endl;
return 0;
}