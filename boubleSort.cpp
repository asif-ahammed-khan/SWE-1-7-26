#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int comparisons = 0, swaps = 0;
    for(int i=0; i<n-1; i++){
        bool isSwap = false;

        for (int j=0; j<n-i-1; j++){
            comparisons++;
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaps++;
                isSwap = true;
            }
        }

        if(!isSwap) break;
    }
    
    cout<<"Comparisons: "<<comparisons<<endl;
    cout<<"Swaps: "<<swaps<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int array[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>array[i];

    }

cout<<" "<<endl;
cout<<"Original array:"<<endl;
for(int i=0; i<n; i++){
    cout<<array[i]<<" ";
}
cout<<" "<<endl;
cout<<" "<<endl;

bubbleSort(array, n);

cout<<"Sorted array using bubble sort: "<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

return 0;
}