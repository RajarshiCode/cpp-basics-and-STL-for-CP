#include<bits/stdc++.h>
using namespace std;
/*


    Sorted and Unique, offcourse this isn't a linear container a tree is maintained.

    SYNTAX:-
    set <datatype> variable_name;


    AID:-
        https://www.geeksforgeeks.org/set-in-cpp-stl/

    Functions to know in set:-
        * insert   
        * emplace    
        * erase    
        * find    
        * size    
        * empty    
        * swap    
        * lower_bound    
        * upper_bound    

*/

int main()
{
    set<int> st;
    st.insert(1);  
    
    st.insert(2);
    st.insert(2);
    st.emplace(4);
    st.emplace(3); // {1,2,3,4}
    for(auto i : st)
        cout<<i<<'\t';
    cout<<endl;
    set<int> st1= {1,23,45,23,88};
    for(auto i : st1)
        cout<<i<<'\t';
    cout<<endl;
    


    //iterator .find()
    cout<<".........."<<endl;
    auto it = st.find(4); // points to 4, and we can use it to manipulate
    st.erase(it); 
    for(auto i : st)
        cout<<i<<'\t';
    it = st.find(1);
    cout<<endl;
    //what if the element isn't in the list
    it = st.find(6); // it will point after the last position.

    cout<<"How many 1 is there?  "<<st.count(1); // offcourse it will be 1 since, it is a set, it is not there in the set it be 0
    cout<<endl; 
    set<int> st2= {1,23,45,24,88}; // {1,23,24,45,88}
    auto it1 = st2.find(23);  
    auto it2 = st2.find(45);
    st2.erase(it1,it2);
    for(auto i : st2)
        cout<<i<<'\t';




    // lower_bound 
    set<int> st4 = {1,2,4,5,9};
    cout<<endl<<"///////////////////////////////"<<endl;
    auto it3 = st4.lower_bound(3); 
    cout<<"value for 3 will be = "<<*it3<<endl; // because 3 isn't available it will point the next greater element ie 4.
    cout<<"value for 2 will be = "<<(*st4.lower_bound(2));  
    cout<<endl;



    // upper_bound
           
    cout<<"value for 4 = "<<*(st4.upper_bound(4))<<endl;
    cout<<"value for 6 = "<<*(st4.upper_bound(6));
    return 0;
}