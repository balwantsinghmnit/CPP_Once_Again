#include<iostream>
using namespace std;

int factorial(int num){
    int res=1;
    for(int i=1;i<=num;i++){
        res *= i;
    }
    return res;
}

static int add(int x, int y){
    return x+y;
}

static int add(int x, int y, int z){
    return x+y+z;
}

int main(){
    int x = 5, y=6, z = 4;
    cout<<add(x,y)<<endl;
    cout<<add(x,y,z)<<endl;
    cout<<factorial(x)<<endl;
    
    return 0;
}