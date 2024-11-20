#include<iostream>
#include<bits/stdc++.h>

int main(){
 //n-> no of nodes
//m-> no of edges 
cout<<"input the no of nodes : "<<endl;
cin>>n;
cout<"input the no of edges :"<<endl;
cin>>m;

//representation using matrix
//for 1 indexing graph
//we use adj[n+1][m+1]

int adj[n+1][m+1];
for(int i=0;i<m;i++){
    //for mentioned input do them as 1
    int u,v;
    cin>>u>>v;
    adj[u][v]=1;
    adj[v][u]=1
}
return 0;
}
