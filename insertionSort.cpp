#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int comparisons = 0, shifts = 0;
    for(int i=1; i<n; i++){
        int current = arr[i];
        int previous = i-1;

        while(previous>=0){
            comparisons++;
            if(arr[previous]>current){
            arr[previous+1] = arr[previous];
            shifts++;
            previous--;
            }
            else{
                break;
            }
        }
        
        arr[previous+1] = current;
    }

    cout<<"Comparisons: "<<comparisons<<endl;
    cout<<"Shifts: "<<shifts<<endl;

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

insertionSort(array, n);

cout<<"Sorted array using insertion sort: "<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

return 0;
}