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
			return (rear+1)%size==front; // if the next position of rear is front then the queue is full
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
				rear= (rear+1)%size;
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
					front = (front+1)%size;
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
	q.Push(81);
	q.Pop();
	q.Push(41);
	q.Push(66);
	cout<<q.Front();
}


// how circular queue works
// 1. The circular queue is a linear data structure that follows the FIFO (First In First Out) principle, but it connects the end of the queue back to the front, forming a circle.
// 2. It uses a fixed-size array to store elements, and two pointers (front and rear) to keep track of the first and last elements in the queue.
// 3. When an element is added to the queue, the rear pointer is incremented, and when an element is removed, the front pointer is incremented. If either pointer reaches the end of the array, it wraps around to the beginning.
// 4. The circular queue is considered full when the next position of the rear pointer is equal to the front pointer, and it is considered empty when the front pointer is -1.