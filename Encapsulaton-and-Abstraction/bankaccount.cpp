#include <iostream>
using namespace std;

class Accounts{
        string accountHolderName;
        int balance;
        static int totalAccounts;
    public:
        Accounts(string a, int b)
        {
            this->accountHolderName = a;
            this->balance = b;
        }
        Accounts(){
            totalAccounts++;
        }
        static int getTotalAccounts(){
            return totalAccounts;
        }
        void deposit(int amount){
            if(amount>0){
                balance += amount;
            }
        }
        void withdraw(int amount){
            if(amount>0){
                balance -= amount;
            }
        }
        void getbalance(){
            cout << "Balance is ->" << balance;
        }
};
int Accounts::totalAccounts = 0;
int main (){
Accounts a1("Dushyant", 10000);
Accounts a2("Rahul", 5000);

a1.deposit(2000);
a1.withdraw(3000);

a1.getbalance();

cout << Accounts::getTotalAccounts();
}