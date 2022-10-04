#include <iostream>
using namespace std;
void solution()
{
    int n, x;
    cin >> n >> x;
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (x % 2)
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