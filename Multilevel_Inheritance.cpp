#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{

};

class Cat: public Dog{

};

int main(){
    Cat d1;
    d1.speak();
}