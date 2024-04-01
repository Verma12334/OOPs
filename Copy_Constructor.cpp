#include<iostream>
using namespace std;

class Here{
    public:
  int health; 
  char level;
  Here(){
     cout<<"Simple constructor called"<<endl;
  }

  // copy constructor
  Here(Here&temp){
    health=temp.health;
    level=temp.level;
  }

  void sethealth(int h){
    health=h;
  }
  void setlevel(char ch){
    level=ch;
  }
  void print(){
    cout<<health<<endl;
    cout<<level<<endl;
  }
    
};
int main(){
    Here h;
    h.sethealth(90);
    h.setlevel('S');
    // copy constructor create inbiut
    Here    r(h);
    // wrong way r(h)
    h.print();
    r.print();

}