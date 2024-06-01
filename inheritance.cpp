#include <bits/stdc++.h>
using namespace std;

class Human{
  public:
  int age;
  int height;
  int weight;

  public:
  int getAge(){
    return this->age;
  }
  void setWeight(int w){
    this->weight = w;
  }
};

class male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
}