#include<iostream>
using namespace std;

class A{
    public:

    void abc(){
    cout<<"Inside Function 1"<<endl;
    }
};

class B{
     public:

    void abc(){
    cout<<"Inside Function 2"<<endl;
    }
};


class C: public A,public B{
     public:
    void func3(){
    cout<<"Inside Function 3"<<endl;
    }
};


int main(){
  C object;
  object.A::abc();
  object.B::abc();
}