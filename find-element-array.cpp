#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target, target_index=-1;
    cout<<"Enter target element: ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            target_index=i;
            break;
        }
    }
    cout<<"Index of target element: "<<target_index<<endl;
    return 0;
}