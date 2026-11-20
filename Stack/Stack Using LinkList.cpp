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
class Stack
{
	Node* top; // top pointer 
	int size; // size of stack, not necessary but useful
	public:
		bool flag;
		Stack()
		{
			top=NULL;
			size = 0;
		}
		// push
		void Push(int value)
		{
			Node* temp = new Node(value);
			if(temp==NULL)
			{
				cout<<"stack is overflow\n";
				return;
			}
			else
			{
				temp->Next = top;
				top = temp;
				size++;
				cout<<"pushed '"<<value<<"'\n";
			}
		}
		// pop
		void POP()
		{
			if(top==NULL)
			{
				cout<<"stack underflow\n";
				return;
			}
			else
			{
				Node* temp1 = top;
				cout<<"\nPoped element "<<temp1->data;
				top = top->Next;
				delete temp1;
				size--;
			}
		}
		//peek
		int peek()
		{
			if(top == NULL)
			{
				cout<<"Stack is empty\n  ";
			}
			else
			{
				return top->data;
			}
		}
		// is Eampty
		bool IsEmpty()
		{
			return top = NULL;
		}
		// is size
		int IsSize()
		{
			return size;
		}
};
int main()
{
	Stack S;
	S.Push(20);
	S.Push(30);
	S.Push(40);
	S.POP();
}
