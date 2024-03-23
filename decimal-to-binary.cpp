#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int mul=1, rem=0, ans=0; 
    cout<<"\nDecimal: "<<num;
    while(num>0){
        rem = num % 2; // OR rem = num & 1;
        num = num / 2; // OR num = num >> 2;
        ans = rem*mul + ans;
        mul = mul * 10;
        // Trace Code:
        // cout<<"\n"<<num<<" "<<rem<<" "<<mul<<" "<<ans<<endl;
    }
    cout<<"\nBinary: "<<ans<<endl;
}