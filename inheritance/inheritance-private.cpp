#include <bits/stdc++.h>
using namespace std;

class Human{
  private:
  //age cannot be inherited by any of the child class
  int age;
  public:
  int height;
  int weight;
  private:
  int calm;

  int getAge(){
    return this->age;
  }

  void setWeight(int w){
    this->weight = w;
  }

};

//all attributes of the humanclass is inerited nside the male cllass
class male : public Human{
    public:
    string color;
    //age is private and cannot be accesed by the child class
    void sleep(){
        // cout<<this->age<<endl;
    }
};

class female : protected Human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    void getheight(){
      cout<<height<<endl;
    }
};

class kam : private Human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    void getheight(){
      //not accesible in the child class
    //   cout<<this->age<<endl;
    }
};


int main(){

  //private --> public  = private
  male m;
  //prvate data member of any class cannot be accesible
  //inaccesible
  // m.age;
  m.sleep();

 

  //private---> protected = private
  female f;
  //a protected member can be assesed by the clid classs
//   cout<<f.age<<endl;
  f.getheight();



  ////private---> private = private
  kam k;
  k.getheight();

}


//mode of inheritamce
// pubilc mode used above
//if any attribute or funcion is public in the main classs and if it sinherited then it would be ssame in the inherited class


//if any atribute is pulic and is inerited privately then it is not accesible in the inherited class