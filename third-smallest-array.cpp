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

    int smallest=INT_MAX,smallest_index=0;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            smallest_index=i;
        }
    }

    int smallest2=INT_MAX,smallest2_index=0;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest2 && i!=smallest_index){
            smallest2=arr[i];
            smallest2_index=i;
        }
    }

    int smallest3=INT_MAX,smallest3_index=0;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest3 && i!=smallest_index && i!=smallest2_index){
            smallest3=arr[i];
            smallest3_index=i;
        }
    }

    cout<<"Smallest element: "<<smallest<<endl;
    cout<<"2nd Smallest element: "<<smallest2<<endl;
    cout<<"3rd Smallest element: "<<smallest3<<endl;
    return 0;
}