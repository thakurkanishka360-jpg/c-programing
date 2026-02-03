#include<iostream>
using namespace std;
class math{
    public:
int add(int a,int b){
    return a+b;
}
float add(float a,float b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
};
int main(){
    math m;
    cout<<"sum of integers"<<m.add(100,200)<<endl;
    cout<<"sum of float"<<m.add(5.5f,7.7f)<<endl;
    cout<<"sum of integers"<<m.add(1,6,9)<<endl;
    return 0;
}