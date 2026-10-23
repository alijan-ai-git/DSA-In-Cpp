#include <iostream>
using namespace std;
class Node{
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


int main()
{
    int pos;
    cout << "Enter the position you want to insert: ";
    cin >> pos;
    int arr[5] = {1,2,3,4,5};
    Node *Head = rec(arr, 0, 5);
    Node * temp = Head;

    if (pos == 0) {
        Node *newNode = new Node(43);
        newNode->Next = Head;
        Head = newNode;
    }
    else{
            while (--pos) {
                temp = temp->Next;
            }
            Node * temp1 = new Node(30);
            temp1->Next = temp->Next;
            temp->Next = temp1;
    }

    return 0;
}