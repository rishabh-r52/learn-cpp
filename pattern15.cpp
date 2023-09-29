#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int count = 1;
    cin>>n;
    for(int i=1;i<=n;i++){
        count=n;
        for(int j=1;j<=n;j++){
            cout<<count--<<" ";
        }
        cout<<endl;
    }
    return 0;
}