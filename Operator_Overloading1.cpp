#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
      public:
      int add(){
        return (a+b);
        // return (this->a+thid->b);
      }
    void setvalue(int a,int b){
        this->a=a;
        this->b=b;
    }
    void print(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    complex operator+(complex t){
        complex q;
        q.a=a+t.a;
        q.b=b+t.b;
        return q;
    }
};
int main(){
    complex obj1;
   // obj1.a//not accesseble 
   obj1.setvalue(89,90);
   cout<<"Sum of obj1:="<<obj1.add()<<endl;


    complex m1;
    m1.setvalue(6,8);
    m1.print();
    complex m2,m3;
    m2.setvalue(5,8);
    m3=m1+m2;// m1 calls +,m2 as a parameter........and return by + ...assign to m3
    m3.print();
}