#include<bits/stdc++.h>
using namespace std;

/*
    element which has the largest value stays at the top. In c++ stl by default it is the largest element.
    priority_queue is the implementation of the heap data structure. Basically binary tree implementation.




    SYNTAX:-
    priority_queue <datatype> variable_name;


    AID:-
    https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/

    https://medium.com/@taohidulii/min-priority-queue-in-c-7e64bd01359c

    https://www.geeksforgeeks.org/heap-data-structure/ 



    Function that can be used in priority_queue:-
    * emplace
    * pop :- O(log n)
    * push :- O(log n)
    * empty
    * size
    * swap
    * top :- O(1)

*/
int main()
{
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(10);
    pq.push(100);
    pq.emplace(2);

    priority_queue<int> pq2;
    pq2.swap(pq);
    cout<<"Normal Priority Queue/max heap: ";
    while(!pq2.empty())
    {
        cout<<pq2.top()<<'\t';
        pq2.pop();
    }
    cout<<endl;


    priority_queue<int,vector<int>,greater<int>> pq3;
    pq3.push(1);
    pq3.push(5);
    pq3.push(10);
    pq3.push(100);
    pq3.emplace(2);

    priority_queue<int,vector<int>,greater<int>> pq4;
    pq4.swap(pq3);
    cout<<"Min Priority Queue/min heap: ";
    while(!pq4.empty())
    {
        cout<<pq4.top()<<'\t';
        pq4.pop();
    }
    cout<<endl;
    return 0;
}