#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;

    if(age>=13 && age <=19)
        cout<<"Teenager";
    else
        cout<<"NOT Teenager";
}