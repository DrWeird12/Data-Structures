#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void sol()
    {
        int l, r;
        cin >> l >> r;

        set<int> st;
        bool ft = false;
        for (int i = l; i <= r; i++)
        {
            for (int j = i + 1; j <= r; j++)
            {
                for (int k = j + 1; k <= r; k++)
                {
                    int temp = (i ^ j ^ k);
                    if (temp >= lt and temp <= rt)
                    {
                        st.insert(i);
                        st.insert(j);
                        st.insert(k);
                        st.insert(temp);
                        if (st.size() == 4)
                        {
                            ft = true;
                            break;
                        }
                    }
                }
                if (ft)
                {
                    break;
                }
            }
            if (ft)
            {
                break;
            }
        }
        if (st.size() == 0)
        {
            cout << -1 << endl;
            return;
        }
        for (auto itr : st)
        {
            cout << itr << " ";
        }
        cout << endl;
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
