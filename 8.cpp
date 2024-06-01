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
};



int main(){


Hero h1(90,'a',"sonam");
Hero h2(100,'b',"sai");
h1.print();
h2.print();
h1=h2;
h1.print();
h2.print();
//a
}