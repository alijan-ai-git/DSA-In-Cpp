#include<iostream>
using namespace std;


class Stack
{
	int *arr; // int pointer to store the first address of the array
	int top; // top variable to store the index of the top element of the stack
	int size; // size variable to store the size of the stack
	public:
		bool flag; // flag variable to check if the stack is empty or not
		Stack(int s)
		{
			flag = 1; // flag is set to 1 when the stack is empty
			top = -1; // top is set to -1 when the stack is empty
			size = s; // size is set to the size of the stack
			arr = new int[s]; // dynamic memory allocation for the array of size s
		}
		// Push
		void Push(int value)
		{
			if(top==size-1)
			{
				cout<<"Stack over flow...!";
				return;
			}
			else
			{
				flag = 0; // flag is set to 0 when the stack is not empty
				top++; // top is incremented to point to the next index of the array
				arr[top] = value; // value is stored at the top index of the array
				cout<<"\nPushed "<<value<<" into the stack = "<<value; 
			}

		}
		// POP
		void Pop()
		{
			if(top==-1)
			{
				cout<<"\nOops tack underflow...!";
			}
			else
			{
				flag = 0;
				cout<<"\nelement "<<arr[top]<<" is poped";
				top--;
				if(top==-1)
				flag=1;
			}
		}
		// Peek
		int peek()
		{
			if(top==-1)
			{
				cout<<"\nStack is empty...!";
				return -1;
			}
			else
			{
				return arr[top];
			}
		}
		// isempty
		bool Empty()
		{
			return top==-1;
		}
		// issize
		int IsSize()
		{
			return top+1;
		}
};
int main()
{
	Stack s(5);
	s.Push(-1);
	s.Push(2);
	s.Push(4);
	s.Push(6);
	s.Push(8);
//
//	s.peek();
//	s.Pop();
//	s.Pop();
//	s.Pop();
	s.Pop();
//	s.Pop();
	
//	cout<<"\nelement at the top of the stack = "<<s.peek();
//	cout<<"\n"<<s.Empty();
//	cout<<"\nsize of stack = "<<s.IsSize();
	int value = s.peek();
	if(s.flag==0)
	{
		cout<<"\n"<<value<<endl;
	}
	
}
