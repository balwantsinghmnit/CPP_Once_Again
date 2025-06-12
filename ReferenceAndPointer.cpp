#include<iostream>
using namespace std;

int main(){
    int slot = 1;
    int *SlotPtr = &slot;
    int &SlotRef = slot;
    cout << slot << " " << *SlotPtr << " " << SlotRef << " " << SlotPtr <<endl;
    *SlotPtr = 3;
    cout << slot << " " << *SlotPtr << " " << SlotRef << " " << SlotPtr <<endl;
    SlotRef = 5;
    cout << slot << " " << *SlotPtr << " " << SlotRef << " " << SlotPtr <<endl;
    return 0;
}