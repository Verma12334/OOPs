#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
      public:
    void set_first_value(int a){
        this->a=a;
    }

    void operator+(complex obj){// this is an operaor overloading
       /* int value1=this->a;
        int value2=obj.a;
        cout<<"Output="<<value2-value1<<endl;*/
        cout<<"Hello Saurabh"<<endl;
    }

    void operator()(){
        cout<<"This a bracket "<<endl;
        cout<<this->a<<endl;
    }

};
int main(){
    complex obj1,obj2;
    obj1.set_first_value(87);
    obj2.set_first_value(187);
    obj1+obj2;// meaning of (obj1+obj2) :=>obj1.operator+(obj2);
   obj1();
}