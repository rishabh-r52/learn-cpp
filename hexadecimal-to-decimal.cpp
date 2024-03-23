#include <iostream>
#include <string>
using namespace std;

int main(){
    string num;
    cout<<"Enter a number: ";
    cin>>num;
    int ans=0, mod=0;
    while(num.length()>0){
        switch(num.at(0)){
            case 'A':
                mod = 10;
                break;
            case 'B':
                mod = 11;
                break;
            case 'C':
                mod = 12;
                break;
            case 'D':
                mod = 13;
                break;
            case 'E':
                mod = 14;
                break;
            case 'F':
                mod = 15;
                break;
            default:
                mod = num.at(0)-'0';
                break;
        }
        ans = ans*16 + mod;
        num.erase(0,1);
    }
    cout<<"Decimal: "<<ans<<endl;
    return 0;
}