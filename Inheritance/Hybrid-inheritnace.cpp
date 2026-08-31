#include <iostream>
using namespace std;

class Animal {
public:
    void eating() {
        cout << "Eating";
    }
};

class Dog : virtual  public Animal {};

class Cat : virtual public Animal {};

class Puppy : public Dog, public Cat {};

int main(){
    Puppy p;
    p.eating();
}