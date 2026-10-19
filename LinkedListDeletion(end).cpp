#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node * Next;
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


int main() {
    int arr[5] = {1,2,3,4,5};
    Node *Head = rec(arr, 0, 5);
    Node *temp = Head;
    Node *prev = NULL;
    while (temp->Next != NULL) {
        prev = temp;
        temp = temp->Next;
    }
    delete temp;
    delete prev->Next;
    return 0;
}