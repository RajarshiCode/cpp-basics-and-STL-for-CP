#include<bits/stdc++.h>
using namespace std;
/*

    Last In First Out , LIFO

    SYNTAX:-
    stack <datatype> variable_name;

    AID:-
    https://www.geeksforgeeks.org/stack-in-cpp-stl/

     Functions which are there in stack:-
        * emplace
        * empty
        * top
        * pop : here it will delete from the front position.
        * push
        * size
        * swap


*/

int main()
{
    stack <int> s;    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top()<<endl; // last that went in
    s.pop();
    while(s.empty()!=1)
    {
        cout<<s.top()<<'\t';
        s.pop();
    }      
    /*
        above operations is done in O(1)
    */
    cout<<endl;
    return 0;
}