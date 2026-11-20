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
    Head->Next = newNode;
    newNode->Prev = Head;
    Node *current = Head;
    while(current != NULL) {
        cout << current->value << " ";
        current = current->Next;
    }
    return 0;
}