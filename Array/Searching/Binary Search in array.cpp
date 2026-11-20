#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key)
{
	int start =0;
	int end = size-1; // because the array is zero based indexing
	int mid;
	while(start<=end)
	{
		mid = (start+end)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]<key)
		{
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[1000],Key;
	int size;
	cout<<"enter size of array : ";
	cin>>size;
	for(int i=0; i<size; i++)
	{
		cout<<"\nenter element at "<<i<<" index is : ";
		cin>>arr[i];
	}
	cout<<"\nenter element you want to search : ";
	cin>>Key;
	cout<<"present at index : "<<BinarySearch(arr,size,Key);
	// Home work question array sorted in decreasing oder you apply binary search
}
