#include <iostream>

using namespace std;

int main(){
    int n=0;
    int num = 1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
    return 0;
}