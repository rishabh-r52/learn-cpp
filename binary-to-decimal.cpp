#include<iostream>
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
        mul = mul * 2;
    }
    cout<<"Decimal: "<<ans<<endl;
}