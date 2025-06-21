#include<iostream>
#include<utility>
using namespace std;

void DNFSort(int arr[], int n){
    int mid=0,low=0,high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid+=1;
            low+=1;
        } else if(arr[mid]==1){
            mid+=1;
        } else{
            swap(arr[high],arr[mid]);
            high-=1;
        }
    }
}

int main() {
    int n;
    cout << "how many numbers to sort?: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers but only 0,1 or 2\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Unsorted: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    DNFSort(arr,n);
    cout<<"\nSorted: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}