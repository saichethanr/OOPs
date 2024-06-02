#include <iostream>

using namespace std;


class B{

 //properties
   public:
   int a;
   int b;

   public:
   int add(){
    return a+b;
   }
  
   void operator+(B &obj){
    int val1 =this->a;
    int val2 =obj.a;
    cout<<"output"<<val2-val1<<endl;
   }
   

   void operator() (){
     cout<<"the bracket"<<" " <<this->a<<endl;
   }


};



int main(){
   B ab1;
   B ab2;
   ab1.a =9;
   ab2.a=10;

   //calls the adidtion overloader
   ab1+ab2;
   //calls the braket overloader
   ab1();
  
}