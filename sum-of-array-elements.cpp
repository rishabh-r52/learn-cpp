#include <iostream>
using namespace std;

int main(){
    int arr[20];
    cout<<"Enter 20 numbers:"<<endl;
    int sum=0;
    for(int i=0;i<20;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"Sum of 20 elements: "<<sum<<endl;
    return 0;
}