#include <bits/stdc++.h>

using namespace std;


//deep copy
//you have to define deep copy
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
   //if the & operator is not passed with the object then the copy does not occur but it will lead to infinite loop
   //this is just pass by reference
   Hero(Hero  &temp){
    //to avoid the shallow copy we are doing deep copy by allocating new memory and asigning values to it
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name = ch;
      this->health = temp.health;
      this->level = temp.level;
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


Hero h1;
h1.level=90;
char s[100] = "sai chethan";
h1.setName(s);
// h1.print();
 
//to use the default copy constructor commont out the created copy constructor
Hero h2(h1);
//changes will happen nly in h1 and not in h2
h1.name[0] ='g';
h2.print();


}