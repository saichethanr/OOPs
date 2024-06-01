#include <iostream>
#include "hero.cpp"
using namespace std;

//copy constructor

class Hero{

 //properties
   private: 
   int health;
    
public:
   char level;
   //constructor default
   Hero(){
    cout<<"constructior called"<<endl;
   }

   //parameterized constructor
   Hero(int health,char level){
      this->health= health;
      this->level = level;
   }
   //if the & operator is not passed with the object then the copy does not occur but it will lead to infinite loop
   //this is just pass by reference
   Hero(Hero  &temp){
      this->health = temp.health;
      this->level = temp.level;
   }

      int gethealth(){
        return health;
      }

   char getlevel(){
    return level;
   }


  void sethealth(int h){
    health =h;
  }

  void setlevel(char l){
    level = l;
  }
   

  void print(){
    cout<<this->health<<endl;
    cout<<this->level<<endl;
  }
};



int main(){


 Hero suresh(70,'c');

 //attributes of suresh is copied to rithesh
 Hero rithesh(suresh);
 rithesh.print(); 
 


}