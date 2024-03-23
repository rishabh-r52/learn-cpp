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

    for(int i=0; i<n-1; i++){
        int smallest = INT_MAX, smallest_index = -1;
        for(int j=i; j<n; j++){ // 5 4 3 2 1 -> 4 3 2 5
            if(arr[j]<smallest){
                smallest = arr[j];
                smallest_index = j;
            }
        }
        // smallest = 1, smallest_index = 4
        arr[smallest_index] = arr[i]; // arr[4] = 5
        arr[i] = smallest; // arr[0] = 1
        // 1 4 3 2 5
    }

    print_array(&arr[0], n);
}
