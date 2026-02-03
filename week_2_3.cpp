#include<iostream>
using namespace std;
template<class T>
T findmax(T a,T b){
if(a>b)
return a;
else
return b;
}
int main(){
    cout<<"Max of two integers:"<<findmax(10,20)<<endl;
    cout<<"Max of two floats:"<<findmax(2.2,6.1)<<endl;
    cout<<"Max of characters"<<findmax('e','r')<<endl;
    return 0;
}