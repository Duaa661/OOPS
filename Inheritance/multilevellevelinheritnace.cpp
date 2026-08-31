#include <iostream>
using namespace std;

class Employee{
    public:
    void login(){
        cout << "After Logged in ->"<<" ";
    }
    
    void time(){
        cout << "9.00 A.M" << endl;
    }
};
class Developer:public Employee{
    public:
    void WriteCode(){
        cout << "Developer start writing code" << endl;
    }
};
class DESGINER:public Employee{
    public:
    void design(){
        cout << "DESGINER started desgining" << endl;
    }
};

class HRManager:public Employee{
    public:
    void hiring(){
        cout << "HRManager started hiring" << endl;
    }
};


int main(){
    Developer d1;
    DESGINER d2;
    HRManager h1;
    d1.login();
    d1.time();
    d1. WriteCode();
    d2.design();
    h1.hiring();
}