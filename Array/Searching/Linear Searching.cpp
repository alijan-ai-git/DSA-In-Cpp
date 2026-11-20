#include<iostream>
using namespace std;


class solution
{
	public:
		int search(int arr[],int n,int x) // n is the size of array and x is the element to be searched
		{
			for(int i=0; i<n; i++)
			{
				if(arr[i]==x)
				{
					return i;
				}
			}
			return -1;
		}
};


int main()
{
	solution obj;
	int x;
	cout<<"find element is = ";
	cin>>x;
	int arr[]={2,3,4,5,6};
	cout<<obj.search(arr,5,x);
	return 0;
}
