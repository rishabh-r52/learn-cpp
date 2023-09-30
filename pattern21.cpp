#include <iostream>

using namespace std;

int main(){
    int num;
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
        num=1;
        for(int i=1;i<=n;i++){
            if(i<j){
                cout<<"  ";
            }
            else{
            cout<<num++<<" ";
            }
        }
        num--;
        for(int k=1;k<=n-j;k++){
            cout<<--num<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<":";
//     cin>>n;
//     //int o=1;
//     int count =1;
//     char a='A';
//     char temp=a;
//     while(count<=n){
//         a = a+n-1;
//         for(int i=1;i<=count;i++){
//             cout<<a--<<"\t";
//         }
//         count++;
//         cout<<"\n";
//     }
// }