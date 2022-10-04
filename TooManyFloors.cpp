#include<bits/stdc++.h>
using namespace std;

void solution(){
    int x,y;
    cin>>x>>y;
    int fx = x%10==0?(x/10)-1:x/10; 
    int fy = y%10==0?(y/10)-1:y/10;;
    cout<<abs(fx-fy)<<endl;
}

int main(){
    int test;
    cin>>test;
    
    while(test--){
        solution();
    }
    return 0;
}