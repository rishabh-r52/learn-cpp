#include <iostream>
using namespace std;

int main()
{
    int init_A = 3, init_B = 4, start = 1, end = 8;
    int A = init_A, B = init_B;
    int moves = 0;

    while (A < end && B < end)
    {
        if (A < end)
            A++;
        if (B < end)
            B++;
        moves++;
    }

    A = init_A, B = init_B;
    while (A > start && B > start)
    {
        if (A > start)
            A--;
        if (B > start)
            B--;
        moves++;
    }

    A = init_A, B = init_B;
    while (A > start && B < end)
    {
        if (A > start)
            A--;
        if (B < end)
            B++;
        moves++;
    }

    A = init_A, B = init_B;
    while (A < end && B > start)
    {
        if (A < end)
            A++;
        if (B > start)
            B--;
        moves++;
    }

    cout << "Total Possible Moves: " << moves << endl;

    return 0;
}