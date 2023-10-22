#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int rem=0, mul=1, ans=0;
    while(num>0){
        rem = num % 10;
        num = num / 10;
        ans = ans + rem*mul;
        mul = mul * 8;
    }
    cout<<"Decimal: "<<ans<<endl;

    int num2=ans;
    ans=0; 
    rem=0;
    mul=1;
    while(num2>0){
        rem = num2 % 2;
        num2 = num2 / 2;
        ans = rem*mul + ans;
        mul = mul * 10;
    }
    cout<<"\nBinary: "<<ans<<endl;
}