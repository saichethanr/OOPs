#include <bits/stdc++.h>

using namespace std;


//static keyword
//static keyword creates such data memeber to acces it u need not create any object
//same with the static functions also
class Hero{

 //properties  
public:
   int health;
   char level;
   char *name;
   static int timetocomplete;

   //constructor default
   Hero(){
    cout<<"constructior called"<<endl;
    name = new char[100];
   }

   //parameterized constructor
   Hero(int health,char level ,char name[100]){
      this->health= health;
      this->level = level;
      this->name = name;
   }
 
   //static function can only access the static members
   //this is not available for the static member functions  
   static int random(){
      cout<<timetocomplete<<endl;
   }
};
//scope resiolution operator
int Hero::timetocomplete =10;

int main(){
 //without creating an object u are initializing and accessing the non static memeber
 cout<<Hero::random()<<endl;
}