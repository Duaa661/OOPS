#include <iostream>
using namespace std;

int main() {

    try {
        int age = -5;

        if (age < 0) {
            throw "Invalid age";
        }

        cout << age;
    }

    catch (const char* message) {
        cout << message;
    }

    return 0;
}