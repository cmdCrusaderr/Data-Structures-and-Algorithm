#include <iostream>
using namespace std;

// Define the structure for a linked list node
struct Node {
    int data;
    Node* next;
    
    // Constructor to initialize a node
    Node(int value) : data(value), next(nullptr) {}
};

// Alternate append function
void append(Node*& head, int value) {
    Node* newNode = new Node(value); // Create a new node

    // If the list is empty, set the new node as the head
    if (head == nullptr) {
        head = newNode;
    } else {
        // Find the last node
        Node* last = head;
        while (last->next != nullptr) {
            last = last->next; // Traverse to the end of the list
        }
        last->next = newNode; // Link the new node at the end
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl; // Indicate the end of the list
}

int main() {
    Node* head = nullptr; // Initialize the head of the linked list

    // Append values to the linked list
    append(head, 10);
    append(head, 20);
    append(head, 30);

    // Print the linked list
    cout << "Linked List: ";
    printList(head);

    // Clean up memory (optional, but good practice)
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current; // Free the current node
        current = nextNode; // Move to the next node
    }

    return 0;
}