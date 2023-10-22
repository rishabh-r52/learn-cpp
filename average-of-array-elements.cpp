#include <iostream>
using namespace std;

int main(){
    int arr[18];
    cout<<"Enter 18 numbers:"<<endl;
    int sum=0;
    for(int i=0;i<18;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    int avg = sum/18;
    cout<<"Average of 20 elements: "<<avg<<endl;
    return 0;
}