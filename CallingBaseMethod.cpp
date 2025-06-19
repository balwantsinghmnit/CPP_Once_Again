#include<iostream>
using namespace std;

class Base{
private:
    int x=5;
public:
    Base(){
        cout<<"Base Constructor\n";
    }
    virtual ~Base(){
        cout<<"Base Destructor\n";
    }
    void Print(){
        cout <<"Value of X: "<<x<<endl;
    }
};

class Derived:public Base{
private:
    int x=10;
public:
    Derived(){
        cout<<"Derived Constructor\n";
    }
    ~Derived(){
        cout<<"Derived Destructor\n";
    }
    void Print(){
        cout <<"Value of X: "<<x<<endl;
    }
    void CallBasePrint(){
        Base::Print();
    }
};

int main(){
    Derived obj1;
    Base* obj2 = new Derived();

    obj1.CallBasePrint();
    obj1.Print();
    obj1.Base::Print();

    obj2->Print();
    obj2->Base::Print();
    delete obj2;

    return 0;
}