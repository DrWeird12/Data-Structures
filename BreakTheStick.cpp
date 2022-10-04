#include <iostream>
using namespace std;
void solution()
{
    int n, x;
    cin >> n >> x;
    if (!n & 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (x & 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solution();
    }
    return 0;
}
