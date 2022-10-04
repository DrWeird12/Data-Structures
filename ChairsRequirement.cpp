#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int x, y;
    //taking input of the numbers
    cin >> x >> y;

    int ans = 0;
    if (x > y)
    {
        ans = x - y;
    }
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
