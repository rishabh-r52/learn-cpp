#include<iostream>
using namespace std;

int main(){
    char alpha = 'A';
    while(alpha<='Z'){
        cout<<"\n"<<alpha++;
    }
    cout<<endl;
    alpha = 'a';
    while(alpha<='z'){
        cout<<"\n"<<alpha++;
    }
}