#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int target){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = ((low+high)/2);
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSwap = false;

        for (int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap) break;
    }

}


int main(){

    int n, target, choice;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int array[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>array[i];

    }

    cout<<"Enter the element to search: "<<endl;
    cin>>target;

    while(choice != 1 && choice != 2){
    cout<<"Choose search method:"<<endl;
    cout<<"1. Binary Search"<<endl;
    cout<<"2. Linear Search"<<endl;
    cout<<"Enter your choice(1 or 2): ";
    cin>>choice;
    cout<<" "<<endl;

    if(choice == 1 || choice == 2){
        switch(choice){
            case 1:
            {
                cout<<"THe array is: "<<endl;
                for(int i=0; i<n; i++){
                    cout<<array[i]<<" ";
                }
                cout<<endl;
                cout<<" "<<endl;

                bubbleSort(array, n);
                cout<<"THe array sorted for binary search: "<<endl;
                for(int i=0; i<n; i++){
                    cout<<array[i]<<" ";
                }
                cout<<endl;
                cout<<" "<<endl;
                int result = binarySearch(array, n, target);
                if(result != -1){
                    cout<<"Using binary search, the element was found at index: "<<result<<endl;
                }
                else{
                    cout<<"Element not found!"<<endl;
                }

            }
            break;

            case 2:
            {
                cout<<"THe array is: "<<endl;
                for(int i=0; i<n; i++){
                    cout<<array[i]<<" ";
                }
                cout<<endl;
                cout<<" "<<endl;
                int result = linearSearch(array, n, target);
                if(result != -1){
                    cout<<"Using linear search, the element was found at index: "<<result<<endl;
                }
                else{
                    cout<<"Element not found"<<endl;
                }
            }
            break;

        }
    }
    else{
        cout<<"Invalid choice. Please chose 1 or 2"<<endl;
    }
}
    return 0;
}
