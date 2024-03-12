#include<bits/stdc++.h>
using namespace std;
/*


    
    SYNTAX :-
    deque <datatype> variable_name;





    AID :-
    https://stackoverflow.com/questions/1436020/whats-the-difference-between-deque-and-list-stl-containers
*/



int main()
{
    deque <int> d;
    d.push_back(10);
    d.emplace_back(20);
    d.push_front(30);
    d.emplace_front(40);



    d.front();
    d.back();
    cout<<endl;
    return 0;
}