#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node* nxt;

//constructor to inialise the values of node
node(int d){
    data=d;
    nxt=NULL;
}
};

//delete the head of the linkedlist
//first check if the list is empty or not
node* deleteHead(node* head){
    if(head!=nullptr){
        node* temp=head;
        head=head->nxt;
        free(temp); //delete the head node
        return head; //the current head
    }

    //if the list is empty 
    cout<<"the list is empty please try again"<<endl;
    return nullptr;
}

// Function to print the linked list
void printList(node* head) {
    while (head != nullptr) {
        std::cout << head->data << " -> ";
        head = head->nxt;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Creating a simple linked list
    node* head = new node(1);
    head->nxt = new node(2);
    head->nxt->nxt = new node(3);

    std::cout << "Original List: ";
    printList(head);

    head = deleteHead(head);
    std::cout << "After deleting head: ";
    printList(head);

    // Clean up remaining nodes
    while (head != nullptr) {
        head = deleteHead(head);
    }

    return 0;
}

//deletion from end

#include <iostream>
using namespace std;

struct node {
    int data;
    node* nxt;

    // Constructor to initialize the values of the node
    node(int d) {
        data = d;
        nxt = nullptr;
    }
};

// Function to delete the tail of the linked list
node* deleteTail(node* head) {
    // If the list is empty or has only one node
    if (head == nullptr) {
        cout << "Deletion at the tail isn't possible. The list is empty!" << endl;
        return nullptr;
    }
    if (head->nxt == nullptr) {
        delete head; // Free the only node
        return nullptr; // Return null since the list is now empty
    }

    node* temp = head;
    // Traverse to the second last node
    while (temp->nxt->nxt != nullptr) {
        temp = temp->nxt;
    }

    // Free the last node
    delete temp->nxt;
    temp->nxt = nullptr; // Set the second last node's next to null
    return head; // Return the updated head
}

// Function to print the linked list
void printList(node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->nxt;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Creating a simple linked list
    node* head = new node(1);
    head->nxt = new node(2);
    head->nxt->nxt = new node(3);

    cout << "Original List: ";
    printList(head);

    head = deleteTail(head);
    cout << "After deleting tail: ";
    printList(head);

    // Clean up remaining nodes
    while (head != nullptr) {
        head = deleteTail(head);
    }

    return 0;
}