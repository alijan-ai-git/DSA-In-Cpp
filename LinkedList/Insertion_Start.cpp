#include <iostream>
using namespace std;

class Node
{
    public:
    int value;
    Node *Next;
};

int main()
{
    int arr[5] = {1,2,3,4,5};
    Node *Head = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Node *newNode = new Node;
            newNode->value = arr[i];
            newNode->Next = NULL;
            Head = newNode;
        }
        else
        {
            Node *temp = new Node;
            temp->value = arr[i];
            temp->Next = Head;
            Head = temp;
        }
    }

    Node *current = Head;
    while (current != NULL)
    {
        cout << current->value << " ";
        current = current->Next;
    }
    return 0;
}