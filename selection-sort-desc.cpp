#include <iostream>
#include <limits.h>
using namespace std;

void print_array(int* arr,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void  read_array(int* arr, int n){
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    read_array(&arr[0], n);
    print_array(&arr[0], n);

    for (int i=n; i>=0; i--){
        int elem = INT_MIN;
        int index = -1;
        for(int j=n-i; j<n; j++){
            if(arr[j]>elem){
                elem = arr[j];
                index = j;
            }
        }
        if(index != i-1){
            arr[index] = arr[n-i];
            arr[n-i] = elem;
            print_array(&arr[0], n);
        }
    }

    // print_array(&arr[0], n);
}