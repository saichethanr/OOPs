#include <iostream>

using namespace std;


class Hero{

 //properties
   public:
   int health;

   void sayhello(){
    cout<<"hello saai"<<endl;
   }
    void sayhello(string name){
    cout<<"hello "<<name<<endl;
   }
//    int sayhello(){
//         cout<<"hello saai int"<<endl;
//         return 1
//    }
      int sayhello(int n){
        cout<<"hello saai int"<<n<<endl;
        return 1;
   }
   //default argumnts
   //can call with 2,3,4 arguments
      int sayhello(int n,int s,int x=0,int k=0){
        cout<<"hello saai int"<<n<<endl;
        return 1;
   }

};



int main(){
   Hero h;
   h.sayhello(2);
}