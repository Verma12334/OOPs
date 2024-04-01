#include<iostream>
using namespace std ;

class student{
    public:
    string name;
    int age;
    bool gender;

student(){
    cout<<"Drfault constructor"<<endl;
}//Drfault constructor


student(string s,int a,bool m){
    name=s;
    age=a;
    gender=m;
}// parameterised conctructor


    void printInfo(){
        cout<<"Name=";
        cout<<name<<endl;
        cout<<"Age=";
        cout<<age<<endl;
        cout<<"Gender";
        cout<<gender<<endl;
    }
};

int main(){
   student a("saurabh",20,1);
  a.printInfo();
  //cout<<a.name;
  student b;
  student c(a);
  student d=c;
   c.printInfo();
    d.printInfo();
}  