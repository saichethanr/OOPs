#include <bits/stdc++.h>

using namespace std;


//copy assignment operator
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
   Hero(int health,char level){
      this->health= health;
      this->level = level;
   }
 

 void setName(char name[]){
    strcpy(this->name,name);
  }
   
  void print(){
    cout<<this->health<<endl;
    cout<<this->level<<endl;
    cout<<this->name<<endl;
  }
};



int main(){


Hero h1(90,9);
Hero h2(100,7);
h1=h2;
//a
}