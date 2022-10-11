#include <bits/stdc++.h>
using namespace std;
void sol(){
	   int temp=0;
	   long long x,y;
	   cin>>x>>y;
	   long long counter=0;
	   if(x==0 && y==0){
	       counter=0;
	       temp=2;
	   }
	   else if(x==0||y==0){
	        counter=-1;
	        x=0;y=0;
	        temp=1;
	    }
	    if(temp==0){
	        if(x>y){
	         long long temp=x;
	         x=y;
	         y=temp;
        }
	    //counter=y;
	    //while(x!=0 && y!=0 && x*2<=y){
	      // x*=2;
	       //counter++;
	    }
	    //if(x<y)
	    counter++;
	 }
    cout<<counter<<endl;
}

int main() {
	int test;
	cin>>test;
	
	while(test--){
	    sol();
	}
	return 0;
}
