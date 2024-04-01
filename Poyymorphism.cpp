#include<iostream>
using namespace std;

class A{
    public:
    void sayhello(){
        cout<<"hello babber"<<endl;
    }

    int sayhello(int n){
        cout<<"hello babber 1"<<endl;
        return n;
    }

    void sayhello(string name){
        cout<<"hello babber"<<name<<endl;
    }
};



int main(){
    A object;
    object.sayhello();
}