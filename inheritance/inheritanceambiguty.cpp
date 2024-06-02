#include <bits/stdc++.h>
using namespace std;

class Animal{
  public:
  int age;
  int height;
  int weight;
  private:
  int calm;
  
  public:
  void speak(){
    cout<<"speaking"<<endl;
  }
  int getAge(){
    return this->age;
  }

  void setWeight(int w){
    this->weight = w;
  }

};

//all attributes of the humanclass is inerited nside the male cllass
class male {
    public:
    string color;

    void speak(){
    cout<<"nahhh"<<endl;
  }
};


class female : public male,public Animal {
    public:
    string color;
};


int main(){

  //public --> public  = public
  female f;
  //.speak is ambiguous
//   f.speak();

//to resolve this ambiguity there is scope resolution operator
f.male::speak();
f.Animal::speak();

}

