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
    int target;
    cout<<"Enter target element: ";
    cin>>target;

    int arr[n];
    read_array(&arr[0], n);
    print_array(&arr[0], n);

    int low = 0, high = n-1;
    int index = -1;
    while(low<=high){
        int mid = low + ((high - low) / 2);
        if(arr[mid] == target){
            index = mid;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(index==-1)
        cout<<"\n"<<target<<" not found"<<endl;
    else
        cout<<"\nFound '"<<target<<"' at "<<index<<endl;
}