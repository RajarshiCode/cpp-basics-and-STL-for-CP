#include <bits/stdc++.h>
using namespace std;

/*
    list is a container in c++ exactly similar to vectors, which allows us to do front opearations as well (doubly linked list + dynamic in nature).
    allows non contiguous memory allocation.

    Traversal is a bit slower as compared to vectors and array.
    Insertion and Deletion is faster compared to vector, once the position is found.

    Front is 

    SYNTAX:-
    list <datatype> variable_name;


    AID :-
    https://www.geeksforgeeks.org/list-cpp-stl/

    https://www.geeksforgeeks.org/different-ways-to-initialize-a-list-in-cpp-stl/

*/

int main()
{
    list<int> ls;
    ls.push_back(20);
    ls.emplace_back(40);

    ls.emplace_front(30);
    for (auto it : ls)
        cout << it << '\t';
    /*
        in the above line if you write cout<<ls<<'\t'; instead of cout<<it<<'\t';
        you will get an error stating "no operator "<<" matches these operands".
    */


   

    // wake up in the morning and make a user defined lists vector   
        // DONE .


    // front operations using list,
    
    list<int> ls3;
    ls3.push_front(12);
    ls3.emplace_front(13);

    list<int> ls4;
    ls4.push_front(15);
    ls4.push_front(18);

    ls4.swap(ls3); //swap function

    cout<<"The of the List :- "<<ls4.size()<<endl;





    //other functions are :-
    // begin, end, rbegin, rend, insert, clear, empty, swap, size

    cout<<"Size of the List : "<<endl;
    int n;
    cin>>n;

    list<int> l5(n);
    cout<<"Enter the elements in the lists"<<endl;
    for(auto &i : l5)
        cin>>i;
    cout<<"Entered elements :"<<endl;
    for(auto i : l5)
        cout<<i<<'\t';    

    //using fill() function to insert in list
    list<int> l6(5);
    int val=20;
    fill(l6.begin(),l6.end(),val);


    l6.back();
    l6.front();

    
    l6.pop_back(); // will delete the last element
    l6.pop_front(); // will delete the front element



    cout << endl;
    return 0;
}