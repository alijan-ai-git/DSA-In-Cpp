#include<iostream>
using namespace std;

class Node
{
	public:
		int data; 
		Node* Next;
		Node(int value)
		{
			data = value;
			Next = NULL;
		}
};
class Queue
{
	Node* front;
	Node* rear;
	public:
		Queue()
		{
			front=NULL;
			rear=NULL;
		}
		// isempty
		bool IsEmpty()
		{
			return front==NULL;
		}
		// Push
		void Push(int x)
		{
			if(IsEmpty())
			{
				front = new Node(x);
				rear = front;
				cout<<"\nPushed "<<x<<" into the Queue";
			}
			else
			{
				rear->Next=new Node(x);
				rear = rear->Next;
				cout<<"\nPushed "<<rear->data<<" into the Queue";
			}
		}
		// Popped element
		void Popped()
		{
			if(IsEmpty())
			{
				cout<<"\nQueue is Empty";
				return;
			}
			else
			{
				cout<<"\nPopped "<<front->data<<" from the Queue";
				Node* temp = front;
				if (front->Next == NULL) // if there is only one element in the queue
				{
					front = NULL;
					rear = NULL;
				}
				else // if there are more than one elements in the queue
				{
					front = front->Next;
				}
				delete temp;
			}
		}
		// Front element of Queue
		int Start()
		{
			if(IsEmpty())
			{
				cout<<"\nQueue is Empty";
				return -1;
			}
			else
			{
				return front->data;
			}
		}
};
int main()
{
	Queue q;
	q.Push(10);
	q.Push(20);
	q.Push(30);
	q.Push(40);
	
	q.Popped();
	cout<<"\n"<<q.Start();
}
