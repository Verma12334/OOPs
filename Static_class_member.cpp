#include<iostream>
#include<string.h>
using namespace std;

class Here{
    public:
  int health; 
  char level;
  char name[100];
  static int timeToComplete;
 
 Here(){
    cout<<"Comstructor called "<<endl;
 }

  //Distructor
  ~Here(){
    cout<<"Distructor bhai called "<<endl;
  }
    };


    int Here::timeToComplete=5;




int main(){
    cout<<Here::timeToComplete<<endl;
    Here a;
    //a.timeToComplete=7;
    cout<<a.timeToComplete<<endl;// not reconmainded beacuse static member not belong to object ..............only belong to class
   return 0;
}