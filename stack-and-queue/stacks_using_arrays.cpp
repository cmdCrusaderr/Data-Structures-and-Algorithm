#include<bits/stdc++.h>
//last in first out
using namespace std;

class stack{
    int size;
    int *arr;
    int top;
    public:
     stack(){
      top=-1;
      size=1000;
      arr=new int[size];
     }
     void push(int x){
        top++;
        arr[top]=x;
     }
     
     //function to remove an element
     int pop(){
       int x=arr[top];
       top--;
       return x;
     }

     int Top(){
        return arr[top];
     }
     
}