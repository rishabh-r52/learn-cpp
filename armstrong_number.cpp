#include <iostream>
using namespace std;

int power(int num, int pow)
{
    int retval = 1;
    for (int i = 0; i < pow; i++)
        retval *= num;
    return retval;
}

int count(int n)
{
    int length = 0;
    while (n != 0)
    {
        n /= 10;
        length++;
    }
    return length;
}

void armstrong(int n)
{
    int temp = n;
    int length = count(n);
    int result = 0;

    while (temp != 0)
    {
        result += power(temp % 10, length);
        temp /= 10;
    }

    if (result == n)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not an Armstrong Number" << endl;
    }
}

int main()
{
    int n = 0;
    cin >> n;
    armstrong(n);
    return 0;
}