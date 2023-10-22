#include <iostream>
using namespace std;
void print_array(int* arr,int n){
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
void  read_array(int* arr, int n){
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i=0; i<n; i++){
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

    for (int i=n-1; i>0; i--){
        for(int j=i; j<n; j++){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break; 
            }
        }
    }

    print_array(&arr[0], n);
}