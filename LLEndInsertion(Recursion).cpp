#include <iostream>
using namespace std;

class Node
{
    public:
        int value;
        Node *Next;
    Node(int value) {
        this->value = value;
        this->Next = NULL;
    }
};


Node* rec (int arr[], int index, int size)
{
    if (index == size) {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->Next = rec(arr,index+1,size);
    return temp;
}

int main() 
{
    int arr[5] = {1,2,3,5,4};
    Node *Head = rec(arr,0,4);
    // traversing
    Node *current = Head;
    while (current) {
        cout << current->value << " ";
        current = current->Next;
    }
}