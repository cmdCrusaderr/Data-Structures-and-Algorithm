#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<gtkmm.
#include<math.h>
#include <sys/resource.h>
#include <sys/time.h>
#include<string.h>
#include<map>

using namespace std;

//using queues and stacks as data structures 
// for my project
//gtk library for my ui welcome page if we 
//will add any

//setting up class for the user with info
class user {
    public:
    string name;
    long phn_number;
    string email;
    string city;
    string state;
    string street; //address of the user
};

class trains{
    public:
    long train_no;
    string arrival;
    string departure;
    string train_name;
    string fare;
    map<string,bool> amenities;

    //constructor function for initialising 
    train(int tn,ar,d,t_n,f){
        arrival=ar;
        train_no=tn;
        departure=d;
        train_name=t_n;
        fare=f;
    }
    
    //

    //function to add or update the amenties
    void add_amenity(string amen,bool check){
        amenities[amen]=check;
    }
    
    //now to check whether this is present or not
    bool check_amenity()
    

}



//writing stacks and queues from scratch 
class stack{
public:
  int s[];
  int n; //size of the stack
  int top;
  
};