#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int i=1;
    while(i<=num){
        if(i%3==0 || i%5==0){
            i++;
            continue;
        }
        cout<<"\n "<<i;
        i++;
    }
}