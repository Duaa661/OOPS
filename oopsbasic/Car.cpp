#include <iostream>
using namespace std;
class Car{
    string brand;
    string model;
    int speed;
    public:
    void Carbrand(string b){
        brand = b;
    }
    void Carmodel(string m){
        model = m;
    }
    void Carspeed(int s){
        if(s<0){
            cout << "Invalid speed";
            return;
        }
        speed = s;
    }
    void accelerate(){
        speed += 10;
    }
    void Break(){
        speed -= 10;
    }
    void getbrand(){
        cout << "Car Brand :" << " " << brand << " " << endl;
    }
    void getmodel(){
        cout << "Car Model :" << " " << model << " " << endl;
    }
    void CarCurrentspeed(){
        cout << "Car Speed :" << " " << speed << " " << endl;
    }
};
int main(){
    Car c;
    c.Carbrand("BMW");
    c.Carmodel("X5");
    c.Carspeed(-50);
    c.accelerate();
    c.accelerate();
    c.accelerate();
    c.Break();
    c.Break();
    c.getbrand();
    c.getmodel();
    c.CarCurrentspeed();
}