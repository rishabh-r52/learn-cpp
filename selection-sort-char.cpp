#include <iostream>
#include <limits.h>
using namespace std;

void print_array(char* arr,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void  read_array(char* arr, int n){
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    char arr[n];
    read_array(&arr[0], n);
    print_array(&arr[0], n);

    for(int i=0; i<n-1; i++){
        char smallest = CHAR_MAX, smallest_index = -1;
        for(int j=i; j<n; j++){
            if(arr[j]<smallest){
                smallest = arr[j];
                smallest_index = j;
            }
        }
        arr[smallest_index] = arr[i];
        arr[i] = smallest;
    }

    print_array(&arr[0], n);
}