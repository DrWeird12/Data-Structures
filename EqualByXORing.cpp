#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
   if(n==0){
	   return false;
   }
   return (ceil(log2(n)) == floor(log2(n)));
}

int countnoBits(int number){   
    return (int)log2(number)+1;
}

void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    int x=a^b;
    if(a == b){ cout << 0 << endl; return; }
    else if(x<n){ cout<<1<<endl; return; }
	else if(x>=n){
	    int nbit_x = countnoBits(x);
	    int N=n;
	    int nbit_n = countnoBits(N);
	    if(nbit_n==nbit_x){
	        if(isPowerOfTwo(n)){ 
			cout<<-1<<endl; return; 
		}
	        else{ cout<<2<<endl; return; }
	    }
	    else{ cout<<-1<<endl; }
    } 
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
