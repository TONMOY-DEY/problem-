#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"please? Enter the number:";
    cin>>n;

    int arr[100];

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int evensum=0;
    int oddsum=0;
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;
           evensum=evensum+arr[i];
        }
        else{
            oddcount++;
            oddsum=oddsum+arr[i];
        } 
    }
    cout<<"even count:"<<evencount<<endl;
    cout<<"odd count:"<<oddcount<<endl;
    cout<<"evensum:"<<evensum<<endl;
    cout<<"oddsum:"<<oddsum;

    return 0;
}