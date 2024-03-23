#include <iostream>
using namespace std;

int main(){
    int n=26;
    char arr[n];
    char start_char = 'a';
    for(int i=0;i<n;i++){
        arr[i] = start_char+i;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}