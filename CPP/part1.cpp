#include <bits/stdc++.h>
using namespace std;


int recursive_binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l)/2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return recursive_binarySearch(arr, l, mid-1, x);
		return recursive_binarySearch(arr, mid+1, r, x);
	}
	return -1;
}
int iterative_binarySearch(int arr[], int l, int r, int x)
{
	while (r >= l)
	{
		int mid = l + (r - l)/2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			r=mid-1;
		else
            l=mid+1;
	}
	return -1;
}

int main(void)
{
int arr[] = {2, 3, 4, 10, 40};
int n = sizeof(arr)/ sizeof(arr[0]);
cout<<recursive_binarySearch(arr,0,n-1,8)<<endl;
cout<<iterative_binarySearch(arr,0,n-1,2)<<endl;
return 0;
}