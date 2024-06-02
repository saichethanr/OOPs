#include <bits/stdc++.h>
using namespace std;

class Human{
  public:

  int age;
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

    void sleep(){
        cout<<"male sleeping"<<endl;
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
      cout<<this->height<<endl;
    }
};


int main(){

  //public --> public  = public
  male m;
  //prvate data member of any class cannot be accesible
  //inaccesible
  // m.calm;
  m.sleep();

 

  //public---> protected = protected
  female f;
  //a protected member can be assesed by the clid classs
  f.getheight();



  ////public---> private = private
  kam k;
  k.getheight();

}


//mode of inheritamce
// pubilc mode used above
//if any attribute or funcion is public in the main classs and if it sinherited then it would be ssame in the inherited class


//if any atribute is pulic and is inerited privately then it is not accesible in the inherited class