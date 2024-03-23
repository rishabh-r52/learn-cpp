// Use 'array_boiled' to bring up the boiler plate.

#include <iostream>
using namespace std;
void print_array(int *arr, int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *arr << " ";
        *arr++;
    }
    cout << endl;
}
void read_array(int *arr, int n)
{
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *arr;
        arr++;
    }
}
int main()
{
    int n = 0;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    read_array(&arr[0], n);
    print_array(&arr[0], n);
}