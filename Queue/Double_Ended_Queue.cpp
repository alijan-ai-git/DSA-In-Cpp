#include<iostream>
using namespace std;
class Node
{
	public:
		Node* Next, *prev;
		int data;
		Node(int value)
		{
			Next = prev = NULL;
			data = value;
		}
};
class Dequeue
{
	Node *Front, *Rear;
	public:
		Dequeue()
		{
			Front=Rear=NULL;
		}
		//push front
		void insertion_in_front(int x)
		{
			if(Front==NULL)
			{
				Front = Rear = new Node(x);
				cout<<"\nInsert "<<Front->data<<" into queue From Start";
				return;
			}
			else
			{
				Node* temp = new Node(x);
				temp->Next = Front;
				Front->prev = temp;
				Front = temp;
				cout<<"\nInsert "<<Front->data<<" into queue From Start";
				return;
			}
		}
		// push back
		void insertion_at_end(int x)
		{
			if(Front==NULL)
			{
				Front=Rear= new Node(x);
				cout<<"\nInsert "<<Rear->data<<" into queue from End";
				return;
			}
			else
			{
				Node* temp = new Node(x);
				Rear->Next = temp;
				temp->prev = Rear;
				Rear = Rear->Next;
				cout<<"\nInsert "<<Rear->data<<" into queue from End";
				return;
			}
		}
		// pop front
		void deletion_from_start()
		{
			if(Front == NULL)
			{
				cout<<"\nqueue is empty";
				return;
			}
			else
			{
				cout<<"\nPopped "<<Front->data<<" Fromt Front";
				Node* temp = Front;
				Front = Front->Next;
				delete temp;
				if(Front)
				{
					Front->prev=NULL;
				}
				else
				{
					Rear=NULL;
				}
			}
		}
		// pop from End
		void deletion_from_end()
		{
			if(Front== NULL)
			{
				cout<<"\nqueue is empty";
				return;
			}
			else
			{
				Node* temp = Rear;
				cout<<"\nPopped "<<Rear->data<<" from End";
				Rear= Rear->prev;
				delete temp;
				if(Rear)
				{
					Rear->Next = NULL;
					return;
				}
				else
				{
					Front=NULL;
				}
				
			}
		}
};
int main()
{
	Dequeue Q;
	Q.insertion_in_front(20);
    Q.insertion_in_front(30);
    Q.insertion_at_end(40);
    Q.insertion_at_end(50);
    Q.deletion_from_start();
    Q.deletion_from_start();
    Q.deletion_from_end();
    Q.deletion_from_end();
    Q.deletion_from_end();
    Q.deletion_from_start();
}
