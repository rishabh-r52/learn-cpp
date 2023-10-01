#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num%2==0 && num>0)
        cout<<"Even and positive.";
    else
        cout<<"NOT Even and positive.";
}