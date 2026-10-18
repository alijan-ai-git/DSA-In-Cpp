#include<iostream>
using namespace std;
class  Node // node is a single block inside linked list, it has value and address
{
	public:
		int data;
		Node * Next; // stores address of the next node
		Node(int value)
		{
		data = value;
		Next = NULL;
		}
};
int main()
{
	Node *Head=NULL;
	Node *Head=new Node(4);
//	Node *temp = new Node(5);
//	temp->Next=Head;
//	Head = temp;
//	Node *temp1 = new Node(6);
//	temp1->Next=Head;
//	Head = temp1;
//	int arr[4]={2,4,6,8};
//	for(int i=0; i<4; i++)
//	{
//		// if link list does not exist
//		if(Head == NULL)
//		{
//			Head = new Node(arr[i]);
//		}
//		else
//		{
//			Node *temp;
//			temp = new Node(arr[i]);
//			temp->Next=Head;
//			Head = temp;
//		}
//	}
//	
//	// insert at end
//	Node* temp2= Head;
//	while(temp2->Next!=NULL)
//	{
//		temp2= temp2->Next;
//	}
//	Node *temp3;
//	temp3 =new Node(7);
//	temp2->Next=temp3;
//	
	int arr2[4]={1,3,5,7};
	for(int i=0; i<4; i++)
	{
//		if(Head==NULL)
//		{
//			Head = new Node(arr2[i]);
//		}
//		else
//		{
			Node *temp4 = Head;
			while(temp4->Next!=NULL)
			{
				temp4 = temp4->Next;
			}
			Node *temp5 ;
			temp5 = new Node(arr2[i]);
			temp4->Next=temp5;
			
//		}
	
	}
	
	
	
//	cout<<Head->data;
	Node *print;
	print=Head;
	while(print)
	{
		cout<<print->data<<" ";
		print = print->Next;
	}
}