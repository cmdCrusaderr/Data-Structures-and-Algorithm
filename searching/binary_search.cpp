
//remember -> binary search always works in a sorted array only

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


    //vector -> arr
    //target -> the element to be searched
    // int high=arr.size()-1;
    // int low=0;
    // int mid=low+(high-low)/2; // to avoid overflow
    //multiple checking cases 
    // C++ program to implement iterative Binary Search

// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// If we reach here, then element was not present
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
