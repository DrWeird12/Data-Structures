#include <bits/stdc++.h>
using namespace std;

//code to find the maximum
void sol(){
    long long x, y, temp;
    cin >> x >> y;
    temp = (x - 1) * (2 * y - x);

    cout << temp << endl;
}

int main(){
    int test;
    cin >> test;

    while (test--){
        sol();
    }
    return 0;
}
