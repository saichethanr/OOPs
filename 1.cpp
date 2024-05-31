#include <iostream>
#include "hero.cpp"
using namespace std;

//we can create the class by also importing from another 
//file

// class Hero{

//  //properties
//    int health;
// };



int main(){
    //object of hero
    hero h1;
    
    //as only int is present size will be 4
    cout<<"size: "<<sizeof(h1)<<endl;

    //what if its an empty class
    //even empty class will have 1 byte of memory
    //size :1

    //accessing

    hero ramesh;
    ramesh.health = 90;
    cout<<ramesh.health<<endl;
}