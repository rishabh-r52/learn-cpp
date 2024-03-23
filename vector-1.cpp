#include <iostream>
#include <vector>

using namespace std;

int main(){
    // // Vector Declaration
    // vector<int> v;

    // // Create vector with size 5 and set each element to 1
    // vector<int> v1 (5,1);
    // // Capacity remains 5

    // // Size & Capacity
    // cout<<"Size of Vector: "<<v.size()<<endl;
    // cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    // v.push_back(2);
    // v.push_back(31);
    // v.push_back(5);

    // cout<<"Size of Vector: "<<v.size()<<endl;
    // cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    // // Update Values
    // v[1] = 5;

    // cout<<"Size of Vector: "<<v1.size()<<endl;
    // cout<<"Capacity of Vector: "<<v1.capacity()<<endl;

    // v1.push_back(8);

    // cout<<"Size of Vector: "<<v1.size()<<endl;
    // cout<<"Capacity of Vector: "<<v1.capacity()<<endl;

    // // vector<int> v3 = {1,2,3,4,5};

    // Delete Values
    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);

    vnew.pop_back();

    cout<<"Size of Vector: "<<vnew.size()<<endl;
    cout<<"Capacity of Vector: "<<vnew.capacity()<<endl;

    vnew.erase(vnew.begin()+1);
    
    cout<<"Size of Vector: "<<vnew.size()<<endl;
    cout<<"Capacity of Vector: "<<vnew.capacity()<<endl;
}