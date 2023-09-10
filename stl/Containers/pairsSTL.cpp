#include<bits/stdc++.h>
using namespace std;

// Pairs is a part of uitlity library.

/*
    SYNTAX:- 
    pair<datatype, datatype> variable_name = {value , value}
    pair<int, int> p = {1,3};
    now the variable p contains {1,3}

    pair<pair<int, int>,pair<int, int>> p1 = {{1,5},{6,8}};

    AID:-
        https://www.geeksforgeeks.org/how-to-iterate-through-a-vector-without-using-iterators-in-c/


*/

int main()
{
    pair<int,int> p1 = {1,3};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<char ,char> p2;
    p2 = make_pair('R','D');
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<pair<int,int>,pair<int,int>> p3;
    p3 = {{6,9},{5,6}};
    cout<<p3.first.first<<" "<<p3.first.second<<endl<<p3.second.first<<" "<<p3.second.second<<endl;

    pair<int, int> p4(58,69);
    cout<<p4.first<<" "<<p4.second<<endl;

    //pair array
    pair<int, int> arr[5] = {{5,9},{8,3},{21,56}}; 
    for(auto &it: arr)
        cout<<it.first<<" "<<it.second<<endl;   


    /*
        what if someone ask you to store, more than two values in the pairs?
        there comes the nested property of the pairs, that means we can use the pairs, inside a pair.    
    
    */     
    cout<<"Nested Pairs"<<endl;
    pair<int, pair<int, int>> p5= {6,{8,9}};

    pair<pair<int, int>, pair<int, pair<int, int>>> p6 = {p1,p5};

    cout<<p6.first.first<<" "<<p6.first.second<<endl;
    cout<<p6.second.first<<"  "<<p6.second.second.first<<" "<<p6.second.second.second<<endl;


    return 0;
}