#include<iostream>
using namespace std;

// void update2(int& n){
//     n++;
// }



//Bad practice
int& update3(int n){
    int a=n;
    int& ans=a;
    // ans++;
    return ans;
}

int main(){

int n=6;
cout<<"Before "<<n<<endl;


// update1(n);
// update2(n);
// update3(n);

update3(n);


return 0;
}
