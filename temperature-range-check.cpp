#include <iostream>
using namespace std;

int main(){
    float temp;
    cout<<"Enter temperature (in Farenheit): ";
    cin>>temp;

    if(temp >=70 && temp<90)
        cout<<"Temperature is suitable for swimming.";
    else
        cout<<"Temperature is NOT suitable for swimming.";
}