#include <iostream>
using namespace std;

void print_array(int* arr,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*arr<<" ";
        *arr++;
    }
    cout<<endl;
}

void  read_array(int* arr, int n){
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>*arr;
        arr++;
    }
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    read_array(&arr[0], n);
    print_array(&arr[0], n);

    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[0] = arr[i];
        arr[i] = temp;
        temp = arr[0];
    }
    
    // int temp=0;
    // int last=arr[n-1];
    // for(int i=n; i>=1; i--){
    //     arr[i] = arr[i-1];
    // }
    // arr[0] = last;

    print_array(&arr[0], n);
    return 0;
}
