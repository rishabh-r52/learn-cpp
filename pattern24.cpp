#include <iostream>

using namespace std;

int main(){
    int num;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        num=n;
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=n-i+1;k<n+i;k++){
            cout<<num--<<" ";
            if(k>=n){
                num+=2;
            }
        }
        cout<<endl;
    }
    return 0;
}