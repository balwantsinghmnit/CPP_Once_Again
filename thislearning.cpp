#include<iostream>
using namespace std;

class Animal{
private:
    int a;
public:
    int b;
    Animal(){
        this->a = 5;
        this->b = 10;
    }
    Animal(const Animal &obj){
        this->a = obj.a;
        this->b = obj.b;
    }
    void Print(){
        cout<<a<<" "<<b<<endl;
    }
};

int main() {
    Animal obj;
    obj.b=7;
    Animal obj2 = move(obj);
    
    obj2.Print();
    obj.Print();
    return 0;
}