#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void sol(){
        long long n;
        cin >> n;
        if (n == 2){
            cout << 0 << endl;
        }
        else if (n % 2)
        {
            long long int total = (n / 2) * (n / 2 + 1) - 1;
            cout << total << endl;
        }
        else
        {
            if (n / 2 % 2)
            {
                long long int sum = (n / 2 - 2) * (n / 2 + 2) - 1;
                cout << sum << endl;
            }
            else
            {
                long long int ans = (n / 2 - 1) * (n / 2 + 1) - 1;
                cout << ans << endl;
            }
        }
    }
};

int main()
{
    int test;
    cin >> test;
    solution obj;
    while (test--)
    {
        obj.sol();
    }
    return 0;
}
