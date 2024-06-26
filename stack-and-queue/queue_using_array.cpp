//the stack works on the principle of lifo - last in first out
#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int front , rear , capacity; 
    //front and rear are index pointing variables
    //c-> capacity of the queue
    int* queue;

    //constructor for assigning the values
    Queue(int c){
        front=0;
        rear=0;
        capacity=c;
        queue=new int;
    }
    ~Queue() { delete[] queue; }
    //this is the deconstructor to free up the memory after usage
    
    void addElements(int data){
        //checking the if the queue is full or not
        if(capacity==rear){
            cout<<"the queue is full"<<endl;
            return;
        }

        //if not
        else{
            queue[rear]=data;
            rear++;
        }
        return;
    }
   // function to delete an element
    // from the front of the queue
    void queueDequeue()
    {
        // if queue is empty
        if (front == rear) {
            printf("\nQueue is  empty\n");
            return;
        }
 
        // shift all the elements from index 2 till rear
        // to the left by one
        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
 
            // decrement rear
            rear--;
        }
        return;
    }
 
    // print queue elements
    void queueDisplay()
    {
        int i;
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
 
        // traverse front to rear and print elements
        for (i = front; i < rear; i++) {
            printf(" %d <-- ", queue[i]);
        }
        return;
    }
 
    // print front of queue
    void queueFront()
    {
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
        printf("\nFront Element is: %d", queue[front]);
        return;
    }
};
 
// Driver code
int main(void)
{
    // Create a queue of capacity 4
    Queue q(4);
 
    // print Queue elements
    q.queueDisplay();
 
    // inserting elements in the queue
    q.addElements(20);
    q.addElements(30);
    q.addElements(40);
    q.addElements(50);

 
    // print Queue elements
    q.queueDisplay();
 
    // insert element in the queue
    q.addElements(60);
 
    // print Queue elements
    q.queueDisplay();
 
    q.queueDequeue();
    q.queueDequeue();
 
    printf("\n\nafter two node deletion\n\n");
 
    // print Queue elements
    q.queueDisplay();
 
    // print front of the queue
    q.queueFront();
 
    return 0;
}
