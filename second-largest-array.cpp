#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n=3, n_check=0;
    cout<<"Enter array size(minimum 3): ";
    cin>>n_check;
    if(n_check>=3)
        n=n_check;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN,largest_index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
            largest_index=i;
        }
    }

    int largest2=INT_MIN,largest2_index=0;
    for(int i=0;i<n;i++){
        if(i!=largest && arr[i]>largest2){
            largest2=arr[i];
            largest2_index=i;
        }
    }

    cout<<"Largest element: "<<largest<<endl;
    cout<<"2nd Largest element: "<<largest2<<endl;
    return 0;
}