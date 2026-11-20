#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node *Next = NULL;
        Node *Prev = NULL;
        Node(int value) {
            this->value = value;
        }
};


int main() {
    Node *Head = new Node(1);
    Node *newNode = new Node(2);
    newNode->Next = Head;
    Head->Prev = newNode;
    Head = newNode;
    int arr[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++) {
        Node *temp = new Node(arr[i]);
        if(Head == NULL) {
            Head = temp;
        }
        else{
            temp->Next = Head;
            Head->Prev = temp;
            Head = temp;
        }
    }

    Node *current = Head;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->Next;
    }
    return 0;
}