#include<iostream>
using namespace std;



int main(){
int i=6;
int *pr=&i;
cout<<*pr<<endl;



cout<<*pr<<endl;
(*pr)=(*pr)+1;
cout<<*pr<<endl;
int a = 7;
int *c = &a;
// c = c + 1;
cout  << a << "  " << *c <<" "<<sizeof(c)<< endl;

return 0;
}
