#include<bits/stdc++.h>
using namespace std;
/*

    everything similar to set but it can store multiple occurences of elements in a sorted manner.


    here i learned about the next and advance functions too. 




*/

int main()
{
    multiset<int> ms;
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(1);
    ms.emplace(1);
    ms.emplace(3);
    ms.emplace(3);
    ms.emplace(5);
    ms.emplace(4);

    for(auto it : ms)
        cout<<it<<'\t'; //{1 1 2 2 3 3 4 5}
    ms.erase(1) ; // all the occurences will be erased.
    cout<<endl;   
    for(auto it : ms)
        cout<<it<<'\t'; //{2 2 3 3 4 5}
    cout<<endl;
    ms.erase(ms.find(2)); // only the first occurence of  2 will be erased
    for(auto it : ms)
        cout<<it<<'\t';
    cout<<endl;

    auto it = ms.find(3);
    advance(it,2);
    ms.erase(ms.find(3),it); // remove 2 occurences of 3.

    //another approach
    //ms.erase(ms.find(3), next(ms.find(3), 2));


    for(auto it : ms)
        cout<<it<<'\t';

    return 0;
}