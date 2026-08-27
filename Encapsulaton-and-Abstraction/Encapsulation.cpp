#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        if(amount<0){
            cout << "Please Enter a valid number. Because amount not enter negative";
        }
        else
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main(){
    BankAccount b1;
    b1.deposit(-50000);
    cout << "Balanace is " << b1.getBalance();
}