#include<iostream>
using namespace std;
class Queue
{
	int *arr;
	int rear,front,size;
	public:
		Queue(int n)
		{
			size = n;
			front = -1;
			rear = -1;
			arr = new int[n];
		}
		
		//Queue is empty
		bool IsEmpty()
		{
			return front==-1;
		}
		//Queue is full
		bool IsFull()
		{
			return rear==size-1;
		}
		//Push 
		void Push(int x)
		{
			if(IsEmpty())
			{
				front=0;
				rear=0;
				arr[0] = x;
				cout<<"Pushed "<<x<<" into the Queue. \n";
				return;
			}
			else if(IsFull())
			{
				cout<<"\nOver flow";
				return;
			}
			else
			{
				rear= rear+1;
				arr[rear]=x;
				cout<<"Pushed "<<x<<" int the Queue. \n";
			} 
		}
		//Pop
		void Pop()
		{
			if(IsEmpty())
			{
				cout<<"\nunderflow";
				return;
			}
			else
			{
				if(front==rear)
				{
					cout<<"Popped "<<arr[front]<<" from the Queue.\n";
					front=rear=-1;
				}
				else
				{
					cout<<"Popped "<<arr[front]<<" from the Queue.\n";
					front = front+1;
				}
			}
		}
		//Queue Front element
		int Front()
		{
			if(IsEmpty())
			{
				cout<<"Queue is Empty.\n";
			}
			else
			{
				return arr[front];
			}
		}
};
int main()
{
	Queue q(5);
	q.Push(5);
	q.Push(51);
	q.Push(56);
	q.Pop();
	cout<<q.Front();
}
