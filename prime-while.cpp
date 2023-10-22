#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int i=2;
    bool prime = true;
    if(num<2){
        prime=false;
    }
    while(i<num){
        if(num%i==0){
            prime=false;
            break;
        }
        i++;
    }
    if(prime)
        cout<<num<<" is Prime"<<endl;
    else
        cout<<num<<" is not Prime"<<endl;
    
}