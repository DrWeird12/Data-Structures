#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int k, x;
    cin >> k >> x;
    // calculiating the waiting time
    int ans = (7 * k) - x;
    cout << ans << endl;
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
