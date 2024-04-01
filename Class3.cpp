
#include<iostream>
using namespace std;

class Here{
  int health; 

    public:
  char level;
  string k;
  void print(){
    cout<<level<<endl;
  }
 int gethealth(){
    return health;
 }
 char getlevel(){
    return level;
 }

void sethealth(int h){
    health=h;
}
void setlevel(char aa){
    level=aa;
}

};
int main(){
  Here h;
  cout<<h.gethealth()<<endl;
  h.sethealth(65);
  cout<<h.gethealth()<<endl;

  Here *b =new Here();
  (*b).sethealth(89);
  (*b).setlevel('S');
  cout<<(*b).gethealth()<<endl;
  cout<<(*b).getlevel()<<endl;

  Here *S=new Here;

    S->sethealth(898090);
  S->setlevel('A');

  cout<<S->gethealth()<<endl;
  cout<<S->getlevel()<<endl;
  cout<<"Size="<<sizeof(S);
}