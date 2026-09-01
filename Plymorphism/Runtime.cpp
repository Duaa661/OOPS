#include  <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark"<<"\n";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow";
    }
};

int main(){
    Animal* animal;

Dog dog;
Cat cat;

animal = &dog;
animal->sound();   // Bark

animal = &cat;
animal->sound();   // Meow
}