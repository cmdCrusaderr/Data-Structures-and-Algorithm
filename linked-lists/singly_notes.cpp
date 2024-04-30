// linked lists help you to decrease and increase the size. They are not in contigous location
//we make 
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

//making the node for linked lists
class node{
    public:
    int data;
    node* next; //data member for storing the memory address/pointer

    public:
    node(int data1, node* next1=nullptr){
        data=data1;
        next=next1;
    }

};

//converting an array to a linkedlist
//returning the head of the linkedlist
//here the head is storing the address of the first element
node* convert2ll(int arr[100]){
   int size=sizeof(arr)/sizeof(arr[0]);
   node* head=new node(arr[0]);
   node* mover= head;
   //here temp is used for next element always
   for(int i=1;i<size;i++){
      node* temp= new node(arr[i]);
      mover->next=temp;
      mover=temp;
   }
   return head;
}
int lengthOfll(node* head){
    int c=0;
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
        c++;
    }
    return c;
}
int main(){
    int arr[]={2,3,4,5,5};
    // node* y=new node(arr[0],nullptr);
    //printing the data value and memory address
    // cout<<y->data;
    // cout<<y->next;
    node* head=convert2ll(arr);
    node* temp= head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
