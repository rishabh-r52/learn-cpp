#include <iostream>
using namespace std;

int trailing_zeroes(int num)
{
    int zeroes = 0;

    for (int i = 1; i <= num; i++)
    {
        if (i % 5 == 0)
            zeroes++;
    }

    cout << "Trailing Zeroes in " << num << "! = " << zeroes;
}

int main()
{
    int num;
    cin >> num;
    trailing_zeroes(num);
    return 0;
}