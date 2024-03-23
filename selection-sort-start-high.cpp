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
        for(int j=0; j<i; j++){
            if(arr[j]>elem){
                elem = arr[j];
                index = j;
            }
        }
        if(index != i-1){
            arr[index] = arr[i-1];
            arr[i-1] = elem;
            // print_array(&arr[0], n);
        }
    }

    print_array(&arr[0], n);
}

// i: 4   3   2
// j: 0-4 0-3 0-2

// 5 4 3 2 1

// 1 4 3 2 5
// 1 3 2 4 5
// 1 2 3 4 5

// for n = 5, iter = 3

// 6 5 4 3 2 1

// 1 5 4 3 2 6
// 1 2 4 3 5 6
// 1 2 3 4 5 6

// for n = 6, iter = 3

// => limit:  <=n/2