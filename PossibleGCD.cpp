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
}
int main(){
    int test;
    cin>>test;
    
    while(test--){
        solution();
    }
    return 0;
}
