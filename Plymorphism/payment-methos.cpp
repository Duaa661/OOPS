#include  <iostream>
using namespace std;

class Payment{
    public:
    virtual void pay(){
        cout << "Make Payment" << endl;
    }
};

// UPI
class UPI :public Payment{
public:
void pay ()override{
    cout << "Payment through UPI" << endl;
}
};

// CREDIT CARD
class CreditCard :public Payment{
public:
void pay ()override{
    cout << "Payment through CreditCard" << endl;
}
};
int main(){
    Payment* p;
    UPI u;
    CreditCard c;
    p = &u;
     p->pay();
    p = &c;
    p->pay();
}