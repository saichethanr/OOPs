#include <iostream>

using namespace std;

//should have same name
//should have same parameter
//depecnds on the inheritance
class Hero{
   //properties
   public:
   int health;

   void sayhello(){
    cout<<"hello saai"<<endl;
   }
};

class A :public Hero{
   //properties
   public:
   int health;
   //until this implementation is not declared the parent class imlementation itself i used
   void sayhello(){
    cout<<"hello lawde"<<endl;
   }
};


int main(){
   A h;
   h.sayhello();
   
}