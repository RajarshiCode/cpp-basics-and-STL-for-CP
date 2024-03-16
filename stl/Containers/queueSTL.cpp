#include<bits/stdc++.h>
using namespace std;
/*
    First In First Out, FIFO

    SYNTAX:-
    queue <datatype> variable_name;


    AID:-
    https://www.geeksforgeeks.org/queue-cpp-stl/

    Functions which are there in queue:-
        * back
        * emplace
        * empty
        * front
        * pop : here it will delete from the front position
        * push
        * size
        * swap


*/

int main()
{
    queue<int> q;    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5); // {1,2,3,4,5}
    q.pop(); // {2,3,4,5}
    cout<<q.front()<<endl; 
    cout<<q.back()<<endl; 
    cout<<"The size : "<<q.size()<<endl;
    cout<<endl;
    return 0;
}