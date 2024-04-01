#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;
    
    int getage(){
        return this->age;
    }
    int setweight(int w){
        this->weight=w;
    }
};

class Male: protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
    int getheight(){
        return this->height;
    }
};

int main(){
    Male m1;
    cout<<m1.getheight()<<endl;
    cout<<m1.getheight()<<endl;
}