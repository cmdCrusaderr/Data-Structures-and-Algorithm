#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int generate_fibonnaci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (generate_fibonnaci(n - 1) + generate_fibonnaci(n - 2));
}

int main()
{
    int n;
    cout<<"Enter the number up to which to generate the Fibonacci series: "<<endl;
    cin>>n;

    cout<<"fibonnaci series : "<<endl;
    for (int i = 0; i < n; i++)
    {
      cout<<generate_fibonnaci(i)<<" ";
    }

    return 0;
}