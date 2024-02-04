//here is the code for the selection sort
//selection sort basically works on finding the min and sorting the elements accordingly with min ele index wise
//first loop will be for swapping and second loop will be for finding the minimum
#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void selection_sort(int arr[], int n){
for(int i=0;i<=n-2;i++){
    int min=i;
    for(int j=i;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }

        //now swapping of the values
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
}

int main(){
    int n; //size of the array
    cout<<"enter the size of the array : ";
    cin>>n;
    int arr[n];
    
    //taking input from the array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    selection_sort(arr,n);

    //printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

