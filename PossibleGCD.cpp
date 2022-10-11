#include<bits/stdc++.h>
using namespace std;
void solution(){
    int a,b;
    cin>>a>>b;
    
    int temp = abs(a-b);
    int ans=0;
    for(int i=1;i<=sqrt(temp);i++){
        if(temp%i==0){
            if(temp/i==i){ ans++; }
            else{ ans+=2; }
        }
    }
    cout<<ans<<endl;
/* 
class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        int MOD = 1000000007;
        
        vector<vector<int>> dp(n, vector<int>(target + 1, 0));        
        
        // last dice, only one face can sum up to remain
        for (int i = 1; i <= min(k, target); i++) {
            dp[n - 1][i] = 1;
        }
        
        for (int dice = n - 2; dice >= 0; dice--) {
            for (int remain = 1; remain <= target; remain++) {
                for (int i = 1; i <= min(k, remain); i++) {    
                    // current dice roll i and next dices roll remain - i 
                    dp[dice][remain] += dp[dice + 1][remain - i];                        
                    dp[dice][remain] %= MOD;
                }
            }
        }
        return dp[0][target];
    }
};
*/
}
int main(){
    int test;
    cin>>test;
    
    while(test--){
        solution();
    }
    return 0;
}
