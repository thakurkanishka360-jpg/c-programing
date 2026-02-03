#include<iostream>
using namespace std;
class student{
    int roll;
    double marks;
    public:
    student(){
         roll =12;
        marks =88.8;
    }
    student(int r){
        roll=r;
        marks=88.8;
    }
    student(int r,int m){
        roll=r;
        marks =m;
    }
    void display(){
        cout<<"roll number"<<roll<<" "<<"marks"<<marks<<endl;
    }
};
int main(){
    student s1;
    student s2(7);
    student s3(5,5.5);
   s1. display();
   s2. display();
   s3.display();
   return 0;
}