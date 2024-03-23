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

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    print_array(&arr[0], n);
}