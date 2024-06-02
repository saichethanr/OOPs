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
class male : public Animal{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};


int main(){

  //public --> public  = public
  male m;

  m.speak();


}

