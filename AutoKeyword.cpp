#include <iostream>
using namespace std;

int main() {
    auto No_Of_Mobile = 1;
    auto Price = 1952.67f;
    auto Liked = true;

    cout << typeid(No_Of_Mobile).name()<<endl;
    cout << typeid(Price).name()<<endl;
    cout << typeid(Liked).name()<<endl;
    return 0;
}