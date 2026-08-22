#include <iostream>
using namespace std;
class Student {
public:
    //  Default Constructor
    Student() {
        cout << "Constructor called" << endl;
    }
    //  Default Destructor
    ~Student() {
        cout << "Destructor called" << endl;
    }
};
int main() {
    Student s1;
}