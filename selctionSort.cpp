#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int comparisons = 0, exchanges = 0;
    for(int i=0; i<n-1; i++){
        int smallestIndex = i;
        for (int j=i+1; j<n; j++){
            comparisons++;
            if(arr[j]<arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
        exchanges++;
    }

    cout<<"Comparisons: "<<comparisons<<endl;
    cout<<"Exchanges: "<<exchanges<<endl;

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

selectionSort(array, n);

cout<<"Sorted array using selection sort: "<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

return 0;
}