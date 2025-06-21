#include<iostream>
using namespace std;

void swap(int &a, int &b){
    if(&a==&b)
        return;
     a = a^b;
     b = a^b;
     a = a^b;

}

void SelectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int index_of_smallest = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[index_of_smallest]) {
                index_of_smallest = j;
            }
        }
        swap(arr[i], arr[index_of_smallest]);
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
    SelectionSort(arr,n);
    cout<<"\nSorted: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}