#include<iostream>
#include<string.h>
using namespace std;

class Here{
    public:
  int health; 
  char level;
  char *name;
Here(){
    cout<<"Siple constructor called"<<endl<<endl;
    name=new char[100];
}//constructor

 void setname(char name[]){
    strcpy(this->name,name);
}
void sethealth(int h){
    health=h;
}
void setlevel(char ch){
    level=ch;
}// values setter functions


  void print(){
    cout<<"Health: =  "<<health<<endl;
    cout<<"Level: =  "<<level<<endl;
    cout<<"Name: =  "<<name<<endl;
    cout<<endl;
  }// print function


  //Copy Constructor
  Here(Here&temp){
    char*ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
    this->health=temp.health;
    this->level=temp.level;
  }

  };
int main(){
    Here h1;
    char name[100]="Saurabh";
    h1.setname(name);
    h1.sethealth(678);
    h1.setlevel('S');
    h1.print();
    
    // use create copy constructor

    Here h2(h1);//cpoy by deep copy constructor

    h2.print();

    h1.name[0]='V';// only change h1.name not change in h2.name
    h1.print();
    h2.print(); 
}