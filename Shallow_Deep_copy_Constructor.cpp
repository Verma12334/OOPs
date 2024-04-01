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

  };
int main(){
    Here h1;
    char name[100]="Saurabh";
    h1.setname(name);
    h1.sethealth(678);
    h1.setlevel('S');
    h1.print();
    
    // use default copy constructor

    Here h2(h1);//cpoy by default copy constructor 
    h2.print();

    // Here h3;
    // h3=h2;
    // h3.print();
    h1.name[0]='V';
    //h1.level='R'; not change h2.level.....beacuse this is copy 
    h1.print();
    h2.print();//after chaging value of h1.name[0].......also change in h2.name[0].....beacuse name is pointer which is pointing h1.name and h2.name both.....this is called shallow copy 
}
