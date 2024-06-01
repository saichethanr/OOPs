#include <iostream>
#include "hero.cpp"
using namespace std;

//we can create the class by also importing from another 
//file

//dynamic allocation

class Hero{

 //properties
   private: 
   int health;
    
public:
   char level;


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


    Hero *b = new Hero;
    b->sethealth(60);
    cout<<b->gethealth()<<endl;



}