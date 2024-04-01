
// #include<iostream>
// using namespace std;

// class Here{
//     public:
//   int health; 
//   char level;
//   Here(){
//     cout<<"Constructor called"<<endl;
//   }
// };
// int main(){
//     cout<<"Hey"<<endl;
//     //object created statically
//   Here h;

//     cout<<"Hey"<<endl;

//    //object created dynamically
//     Here *per=new Here();
//    // Here *per=new Here;
//     Here t[5];
// }










#include<iostream>
using namespace std;

class Here{
    public:
  int health; 
  char level;
  Here(int health){
    (*this).health=health;
    this->level=0;

    cout<<"Constructor called"<<endl;
  }
  Here(){
    
  }
};
int main(){
    cout<<"Hey"<<endl;
    //object created statically
  Here h(89);

    cout<<"Hey"<<endl;

   //object created dynamically
    Here *per=new Here(90);
   // Here *per=new Here;
    Here t[5];
}