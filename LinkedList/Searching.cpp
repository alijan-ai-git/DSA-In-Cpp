#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node *Next;
        Node(int value){
            this->value = value;
            this->Next = NULL;
        }
};


Node * rec(int arr[], int index, int size) {
    // Base case: if the index reaches the size of the array, return NULL
    // This indicates the end of the linked list
    // Recursive case: create a new node with the current array value
    // Set the Next pointer of the new node to the result of the recursive call with the next index
    // Return the newly created node
    if(index == size) {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->Next = rec(arr, index + 1, size);
    return temp;
}


int main() {
    int arr[5] = {1,2,3,4,5};
    Node *Head = rec(arr, 0, 5); // create a linked list from the array, head points to the first node
    int value;
    cout << "Enter the value to search: ";
    cin >> value;
    Node *temp = Head;
    while(temp != NULL) {
        if(temp->value == value) {
            cout << "Value found in the linked list." << endl;
            cout << "Address of the node containing the value: " << temp << endl;
            break;
        }
        temp = temp->Next;
    }
    if(temp == NULL) {
        cout << "Value not found in the linked list." << endl;
    }
    return 0;
}