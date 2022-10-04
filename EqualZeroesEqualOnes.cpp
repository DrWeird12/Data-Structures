#include<bits/stdc++.h>
using namespace std;

string solution(){
    int x;
    cin>>x;
    
    string str="";
    string a = "10", b = "01";
    
    if(x==3){ return "010"; }
    else if(x%4==0){
        int temp = x/4;
        while(temp--){
            str = str + a;
        }
        temp = x/4;
        while(temp--){
            str = str + b;
        }
    }
    else if(x%4==1){
        int temp = x/4;
        while(temp--){
            str = str + a;
        }
        str.push_back('0');
        temp = x/4;
        while(temp--){
            str = str + b;
        }
    }
    else if(x%4==2){
        int temp = x/4;
        while(temp--){
            str = str + a;
        }
        str.push_back('0');
        str.push_back('0');
        temp = x/4;
        while(temp--){
            str = str + b;
        }
    }
    else if(x%4==3){
        int temp = x/4;
        while(temp--){
            str = str + a;
        }
        str.push_back('0');
        str.push_back('0');
        str.push_back('0');
        temp = x/4;
        while(temp--){
            str = str + b;
        }
    }
    
    return str;
}

int main(){
    int test;
    cin>>test;
    
    while(test--){
        string ans = solution();
        cout<<ans<<endl;
    }
    return 0;
}
