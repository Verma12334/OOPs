// #include<iostream>
// #include<string.h>
// using namespace std;

// class Here{
//     public:
//   int health; 
//   char level;
//   char name[100];
//   void print(){
//     cout<<"Health:=  "<<health<<endl;
//     cout<<"Level :=  "<<level<<endl;
//     cout<<"Name:=  "<<name<<endl;
//     cout<<endl;

//   }
//     };
// int main(){
//     Here h1={90,'s',"Saurabh"};
//     Here h2={78,'V',"verma"};
//     h1.print();
//     h2.print();
    
//     h1=h2;//Copy aasignment operator

//     h1.print();
//     h2.print();
// }

#include<iostream>
#include<string.h>
using namespace std;

class Here{
    public:
  int health; 
  char level;
  char name[100];
  string Name;
  void print(){
    cout<<"Health:=  "<<health<<endl;
    cout<<"Level :=  "<<level<<endl;
    cout<<"Name1:=  "<<name<<endl;
    cout<<"Name2:=  "<<Name<<endl;
    cout<<endl;
    }
  };
int main(){
    Here h1={90,'s',"Saurabh","Verma"};
    Here h2={78,'V',"verma","Saurabh"};
    Here f(h2);
    Here d;
    
    h1=h2;//Copy aasignment operator

    h1.print();
    h2.print();
    f.print();
    d.print();
}