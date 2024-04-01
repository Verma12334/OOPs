#include<iostream>
using namespace std ;

class Here{
  //int health; // This is known as the "empty class optimization" or "EBO."
};

int main(){
  Here h;
  cout<<"Size "<<sizeof(h);
}
// #include<iostream>
// using namespace std ;

// class Here{
//   int health; 
// };

// int main(){
//   Here h;
//   cout<<"Size "<<sizeof(h);
// }