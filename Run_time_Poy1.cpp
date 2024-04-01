#include<iostream>
using namespace std;
class parent{
    public:
    void show(){  // function same as a method
        cout<<"Inside parent class :"<<endl;
    }
};

class subclass:public parent{
    public:
     void show(){
        cout<<"Inside subparent class :"<<endl;
    }
};

int main(){
    subclass obj1;
    obj1.show();

}
 