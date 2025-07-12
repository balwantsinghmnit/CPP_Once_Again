#include <iostream>
using namespace std;

void ToH(int n, char fr, char to, char aux){
    if(n==1){
        cout<< "Move disk 1 from "<<fr<<" to "<<to<<"\n";
        return;
    }
    ToH(n-1,fr,aux,to);
    cout<<"Move disk "<<n<<" "<<fr<<" to "<< to<<endl;
    ToH(n-1,aux,to,fr);
}

int main(){
    int n;
    cout<<"How many disks are there in A: ";
    cin>>n;
    ToH(n,'A','C','B');
    return 0;
}