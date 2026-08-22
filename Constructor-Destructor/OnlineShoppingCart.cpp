#include <iostream>
using namespace std;

class ShoppingCart {
private:
    string userName;
    int items;

public:

    // Constructor
    ShoppingCart(string name) {
        userName = name;
        items = 0;

        cout << "Cart created for " << userName << endl;
    }

    void addItem() {
        items++;
        cout << "Item added to cart" << endl;
    }

    void showCart() {
        cout << userName << " has "
             << items << " items in cart." << endl;
    }

    // Destructor
    ~ShoppingCart() {
        cout << "Cart session ended for "
             << userName << endl;
    }
};

int main() {

    ShoppingCart cart("Dushyant");

    cart.addItem();
    cart.addItem();

    cart.showCart();

    return 0;
}