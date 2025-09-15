#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) { // empty list
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert after a given node
void insertAfter(Node* prev, int value) {
    if (prev == nullptr) {
        cout << "Previous node cannot be NULL\n";
        return;
    }

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = prev->next;
    prev->next = newNode;
}

// Print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;

    // Insertions
    insertAtBeginning(head, 10); // List: 10
    insertAtEnd(head, 20);       // List: 10 -> 20
    insertAfter(head, 15);       // List: 10 -> 15 -> 20

    // Print the list
    printList(head);

    return 0;
}
