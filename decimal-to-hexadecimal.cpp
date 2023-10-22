#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    string ans="";
    while(num>0){
        switch(num%16){
            case 10:
                ans = 'A' + ans;
                break;
            case 11:
                ans = 'B' + ans;
                break;
            case 12:
                ans = 'C' + ans;
                break;
            case 13:
                ans = 'D' + ans;
                break;
            case 14:
                ans = 'E' + ans;
                break;
            case 15:
                ans = 'F' + ans;
                break;
            default:
                ans = to_string(num%16) + ans;
                break;
        }
        num = num/16;
    }
    cout<<"Hexadecimal: "<<ans<<endl;
    return 0;
}