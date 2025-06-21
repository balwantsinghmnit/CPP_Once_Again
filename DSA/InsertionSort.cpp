#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int current = arr[i], prev=i-1;
        while (prev>=0 && arr[prev]>current) {
            arr[prev+1] = arr[prev];
            prev -= 1;
        }
        arr[prev+1] = current;
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
    cout<<"Unsorted: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    InsertionSort(arr,n);
    cout<<"\nSorted: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}