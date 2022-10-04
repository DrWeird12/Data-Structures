#include <bits/stdc++.h>
using namespace std;
void solution(){
    vector<int> temp(3);
    for(int i=0;i<3;i++){
        cin>>temp[i];
    }
    sort(temp.begin(), temp.end());
    if(temp[0]==temp[1] && temp[1]==temp[2]){ cout<<"YES"<<endl; }
    else if(temp[0]==temp[1] && temp[2]>temp[1]){ cout<<"YES"<<endl; }
    else{ cout<<"NO"<<endl; }
}

int main() {
	int test;
	cin>>test;
	
	while(test--){
	    solution();
	}
	return 0;
}