#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *Next;
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Node *Head = NULL;
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Node *newNode = new Node;
            newNode->data = arr[i];
            newNode->Next = NULL;
            Head = newNode;
        }
        else
        {
            // Create a new node and insert it at the end of the linked list
            Node *newNode = new Node;
            newNode->data = arr[i];
            newNode->Next = NULL;
            Node *current = Head;
            while (current->Next != NULL)
            {
                current = current->Next;
            }
            current->Next = newNode;
        }
    }
    // Print the linked list after each insertion
    Node *current = Head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->Next;
    }
    return 0;
}