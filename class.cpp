#include <iostream>
using namespace std;


class Hero{
   int health;
};



int main(){
    //object of hero
    Hero h1;
    
    //as only int is present size will be 4
    cout<<"size: "<<sizeof(h1)<<endl;
}