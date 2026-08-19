#include <iostream>
using namespace std;
class Student{
    string name;
    int age;
    int mark;
    public:
    void display(string n,int a,int m){
        name = n;
        age=a;
        mark = m;
    }
    void displayOutput(){
        cout << "Name:" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Mark:" << mark << endl;
        cout << endl;
    }
};
int main(){
    Student s1;
    s1.display("Mohan", 23, 356);
    s1.displayOutput();

    Student s2;
   s1.display("Ram", 21, 456);
    s1.displayOutput();
    
}