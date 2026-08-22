#include <iostream>
using namespace std;

class Database {
public:

    Database() {
        cout << "Database connection opened" << endl;
    }

    ~Database() {
        cout << "Database connection closed" << endl;
    }

    void getData() {
        cout << "Fetching data..." << endl;
    }
};

int main() {
    Database db;

    db.getData();

    return 0;
}