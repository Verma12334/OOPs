#include<iostream>
using namespace std;

class Here{
    public:
  int health; 
  char level;
  
  //Paramerterised constructor
  Here(int health){
    cout<<this<<endl;
    this->health=health;
  }

  Here(int health,int level){
    cout<<this<<endl;
    this->health=health;
    this->level=level;
  }
  void s(){
    cout<<health<<endl;
    cout<<level<<endl;

  }
  
};
int main(){
    Here h(78,89);
    cout<<"Address of h="<<&h<<endl;
    h.s();
    Here n(7);
    
}