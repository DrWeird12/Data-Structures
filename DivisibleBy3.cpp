#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int a, b;
    cin >> a >> b;

    int tempx = a % 3, tempy = b % 3;
    if (tempx == 0 || tempy == 0)
    {
        cout << "0" << endl;
    }
    else if (tempx == tempy)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "2" << endl;
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