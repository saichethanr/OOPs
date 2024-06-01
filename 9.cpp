#include <bits/stdc++.h>

using namespace std;


//work of destructor is to deallocate the allocated memory
class Hero{

 //properties  
public:
   int health;
   char level;
   char *name;


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
 

 void setName(char name[]){
    strcpy(this->name,name);
  }
   
  void print(){
    cout<<this->health<<endl;
    cout<<this->level<<endl;
    cout<<this->name<<endl;
  }


  ~Hero(){
    cout<<"destructor called"<<endl;
  }
};



int main(){

//for statically allocated objec the destructor is called automaticaly
Hero a;

//dynamically
//call destructor manually
Hero *b = new Hero();
delete b;

}