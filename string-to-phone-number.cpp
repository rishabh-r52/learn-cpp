#include <bits/stdc++.h>
using namespace std;

string string_to_number(string s){
    if(s=="zero") return "0";
    if(s=="one") return "1";
    if(s=="two") return "2";
    if(s=="three") return "3";
    if(s=="four") return "4";
    if(s=="five") return "5";
    if(s=="six") return "6";
    if(s=="seven") return "7";
    if(s=="eight") return "8";
    return "9";
}

string getPhoneNumber(string s) {
    string num="";
    string ans="";
    int mul = 1;
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!=' '){
            num = num  + s.at(i);
        }
        else{
            if(num=="double"){
                mul = 2;
                num = "";
            }
            else if(num=="triple"){
                mul = 3;
                num = "";
            }
            else{
                for(int i=0; i<mul; i++){
                    ans = ans + string_to_number(num);
                }
                num = "";
                mul = 1;
            }
        }
    } // end for
    for(int i=0; i<mul; i++){
        ans = ans + string_to_number(num);
    }
    return ans;
}

int main(){
    cout<<"test"<<endl;
}