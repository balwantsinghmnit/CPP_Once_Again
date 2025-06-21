#include<iostream>
using namespace std;

double Power(double x, int n){
    int binary_form = n;
    if(n<0){
        binary_form *= -1;
        x = 1/x;
    }
    double ans = 1.0;
    while(binary_form>0){
        if(binary_form%2==1){
            ans *= x;
        }
        x *= x;
        binary_form /= 2;
    }
    return ans;
}

int main(){
    double x;
    int n;
    cout<<"Enter number: ";
    cin>>x;
    cout<<"\nEnter power: ";
    cin>>n;
    cout<<"\nPow("<<x<<", "<<n<<") = "<< Power(x, n)<<endl;
    return 0;
}