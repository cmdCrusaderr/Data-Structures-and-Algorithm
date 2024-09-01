#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

int main(){

    //declaring set
    set<int> s1;
    //what is set ?
    //A set is a data structure that maintains a collection of elements. The basic operations of sets are element insertion, search, and removal. Sets are implemented so that all the above operations are efficient, which often allows us to improve on running times of algorithms using sets.
    
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(78);
    s1.insert(99);

    //printing the elements of the set
    for(auto i:s1){
        //just like we did in the vectors
        cout<<i<<endl;
    }

}