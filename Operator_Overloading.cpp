// #include<iostream>
// using namespace std;

// class complex{
//     int a;
//     int b;
//       public:
//     void setvalue(int a,int b){
//         this->a=a;
//         this->b=b;
//     }
//     void print(){
//         cout<<a<<endl;
//         cout<<b<<endl;
//     }

//     complex add(complex t){
//         complex q;
//         q.a=a+t.a;
//         q.b=b+t.b;
//         return q;
//     }
// };
// int main(){
//     complex m1;
//     m1.setvalue(6,8);
//     m1.print();
//     complex m2,m3;

//     m2.setvalue(5,8);

//     m3=m1.add(m2);
//     m3.print();
// }



#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
      public:
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

    void operator-(complex tm){
        cout<<"Hello Saurabh verma"<<endl;
    }
      
    void operator++(){
        cout<<"I love you too"<<endl;
    }

    complex operator*(complex v){
        complex q;
        q.a=a-v.a;
        q.b=b-v.b;
        return q;
    }

};


int main(){
    complex m1;
    m1.setvalue(6,8);
    m1.print();
    complex m2,m3;

    m2.setvalue(5,8);

    m3=m1+m2;// m1 calls +,m2 as a parameter........and return by + ...assign to m3
    m3.print();

    complex x1,x2;
    x1-x2;
    complex v1;
    ++v1;

    complex c1,c2,c3;
    c1.setvalue(7,8);
    c2.setvalue(78,89);
    c3=c1*c2;
    c3.print();
}