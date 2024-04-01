#include<iostream>
using namespace std;

class Here{
    //properties
    public:
  int health; 
  private:
  char level;
  void print(){
    cout<<level<<endl;
  }
};
int main(){
  Here h;
  cout<<"Size "<<sizeof(h);
}







// #include<iostream>
// using namespace std;

// class Here{
//     //properties
//   int health; 

//     public:
//   char level;
//   void print(){
//     cout<<level<<endl;
//   }
//  int gethealth(){
//     return health;
//  }
//  char getlevel(){
//     return level;
//  }

// void sethealth(int h){
//     health=h;
// }
// void setlevel(char aa){
//     level=aa;
// }

// };
// int main(){
//   Here h;
//   cout<<h.gethealth()<<endl;
//   h.sethealth(65);
//   cout<<h.gethealth()<<endl;
// }