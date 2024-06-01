#include <iostream>
#include "hero.cpp"
using namespace std;

//we can create the class by also importing from another 
//file

//dynamic allocation
//constructor called


class Hero{

 //properties
   private: 
   int health;
    
public:
   char level;
   //constructor
   Hero(){
    cout<<"constructior called"<<endl;
   }

   //parameterized constructor
   //this key word is to configure the usage of the same name out side and inside 
   //the class
   //it may cause the ivering the same location

   //this keyword initialized the value to the current object calling it
   Hero(int health,char level){
      this->health= health;
      this->level = level;
   }
   
};



int main(){
    //we will not be able to access the health attribute of ramesh as its private
    //hence there is the concept of geters and setters

    //this is gving error as the health member is private
    // Hero ramesh;
    // ramesh.health =90;
    // cout<<ramesh.health<<endl;

    // Hero ramesh;
    // ramesh.sethealth(3);
    // cout<<"ramesh health is "<<ramesh.gethealth()<<endl;

    cout<<"h1"<<endl;

    //while the creation of instance of a class a default constructor is already called
    Hero *b = new Hero(80,'c');
    cout<<b->level<<endl;
  
    cout<<"hello"<<endl;


}