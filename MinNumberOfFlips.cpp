#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += vec[i];
    }

    if (abs(sum) % 2 != 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << abs(sum) / 2 << endl;
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
