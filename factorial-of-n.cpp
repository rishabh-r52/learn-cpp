#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int fact=1,i=1;
    if(num>1){
        while(i<=num){
            fact *= i++;
        }
    }
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;
}