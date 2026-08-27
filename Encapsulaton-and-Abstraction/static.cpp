#include <iostream>
using namespace std;

class User{
    static int totalRegisteredUser;
    public:
    User(){
        // increment
        totalRegisteredUser++;
    }
    // return static totalRegisterUser
    static int gettotalRegsiterUser(){
        return totalRegisteredUser;
    }
};

    //  intialize the object
    int User::totalRegisteredUser = 0;
int main(){
    User u1;
    User u2;
    User u3;
    cout <<"Total Register User"<< User::gettotalRegsiterUser() << " ";
}


//      This is the real Tree

//       TotalRegisterUser
//     /       |       \
//    /        |        \
// User u1   User u2     User u3