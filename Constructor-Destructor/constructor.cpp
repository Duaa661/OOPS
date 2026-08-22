#include <iostream>
using namespace std;

class BankAccount {
public:
    string name;
    int accountNumber;
    double balance;
    // Default Constructor
    BankAccount(){
        cout << "Account Object Instailized" << endl;
    }
    // Parmeterized Contructor
    // BankAccount(string n, int accNo, double initialBalance) {
    //     name = n;
    //     accountNumber = accNo;
    //     balance = initialBalance;

    //     cout << "Bank account created successfully" << endl;
    // }
    // inline Contructor
    BankAccount(string n, int accNo, double initialBalance) : name(n), accountNumber(accNo), balance(initialBalance){}

    
    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount user1;
    BankAccount user2("Dushyant", 1001, 5000);

    user2.showDetails();

    return 0;
}