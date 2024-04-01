#include<iostream>
#include<string.h>
using namespace std;

class Here{
    public:
  int health; 
  char level;
  char name[100];
 
 Here(){
    cout<<"Comstructor called "<<endl;
 }

  //Distructor
  ~Here(){
    cout<<"Distructor bhai called "<<endl;
  }
    };
int main(){
    //satatic
    Here h1;// call Distructor autometically
    //dynamically
    Here*ptr=new Here;// call mainvally
    delete ptr;
}