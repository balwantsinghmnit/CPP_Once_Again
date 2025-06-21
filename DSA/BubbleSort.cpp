#include<iostream>
using namespace std;

void swap(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

void BubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "how many numbers to sort?: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    BubbleSort(arr,n);
    cout<<"Sorted: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}