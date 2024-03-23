#include <iostream>
using namespace std;

int main()
{
    int init_A = 3, init_B = 4, start = 1, end = 8;
    int moves = 0;
    int A = init_A, B = init_B;
    int count = 0, count_NE = 0, count_NW = 0, count_SE = 0, count_SW = 0;

    while (A < end && B < end)
    {
        if (A < end)
            A++;
        if (B < end)
            B++;
        count_SE++;
    }

    A = init_A, B = init_B;
    while (A > start && B > start)
    {
        if (A > start)
            A--;
        if (B > start)
            B--;
        count_NW++;
    }

    A = init_A, B = init_B;
    while (A > start && B < end)
    {
        if (A > start)
            A--;
        if (B < end)
            B++;
        count_NE++;
    }

    A = init_A, B = init_B;
    while (A < end && B > start)
    {
        if (A < end)
            A++;
        if (B > start)
            B--;
        count_SW++;
    }

    count = count_NE + count_SW + count_SE + count_NW;

    cout << "Total Possible Moves: " << count << endl;

    return 0;
}