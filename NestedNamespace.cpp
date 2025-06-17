#include<iostream>
using namespace std;

namespace MyMath{
    int factorial(int num){
        int res = 1;
        for(int i=1;i<=num;i++){
            res *= i;
        }
        return res;
    }
    namespace SimpleMath{
        int add(int a, int b){
            return a+b;
        }

    }
}

int main(){
   
    int fact, addition;
    fact = MyMath::factorial(5);
    addition = MyMath::SimpleMath::add(3,5);

    cout << "Fact: " << fact << "  Addition: "<< addition<<endl;
    return 0;
}
//Program will work in c++ 17 only