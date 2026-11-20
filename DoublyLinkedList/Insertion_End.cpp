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
    Node *Head = NULL;
    int arr[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++) {
        Node *temp = new Node(arr[i]);
        if (Head == NULL) {
            Head = temp;
        }
        else{
            Node *current = Head;
            while (current != NULL) {
                current = current->Next;
            }
            current->Next = temp;
            temp->Prev = current;
        }
    }
    Node *Nodes = Head;
    while(Nodes!= NULL) {
        cout << Nodes->value << " ";
        Nodes = Nodes->Next;
    }
    return 0;
}