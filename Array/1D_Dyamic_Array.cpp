#include<iostream>
using namespace std;
int main()
{
	int *ptr=new int[5]{1,3,4,5,6};
	for(int i=0; i<5; i++)
	{
		cout<<ptr[i]<<" ";
	}
	cout<<endl;
	delete[] ptr;
}
