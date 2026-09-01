#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int a, int b) {

    if (b == 0) {
        throw runtime_error("Cannot divide by zero");
    }

    return a / b;
}

int main() {

    try {
        cout << divide(10, 0);
    }
    catch (const runtime_error& e) {
        cout << e.what();
    }

    return 0;
}