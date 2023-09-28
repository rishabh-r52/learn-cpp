#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<"* ";
        }
        for(int col=2*(n-row); col>=1; col--){
            cout<<"  ";
        }
        for(int col=row; col>=1; col--){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int row=2; row<=n; row++){
        for(int col=1; col<=n-row+1; col++){
            cout<<"* ";
        }
        for(int col=1; col<=2*(row-1); col++){
            cout<<"  ";
        }
        for(int col=n-row+1; col>=1; col--){
            cout<<"* ";
        }
        cout<<endl;
    }

}