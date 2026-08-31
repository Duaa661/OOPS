#include <iostream>
using namespace std;
class Father {
public:
    void fatherSkill() {
        cout << "Father skill\n";
    }
};

class Mother {
public:
    void motherSkill() {
        cout << "Mother skill\n";
    }
};

class Child : public Father, public Mother {
};


int main(){
Child c;

c.fatherSkill();
c.motherSkill();
}