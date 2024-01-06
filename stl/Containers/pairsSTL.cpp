#include <bits/stdc++.h>
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
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<char, char> p2;
    p2 = make_pair('R', 'D');
    cout << p2.first << " " << p2.second << endl;

    pair<pair<int, int>, pair<int, int>> p3;
    p3 = {{6, 9}, {5, 6}};
    cout << p3.first.first << " " << p3.first.second << endl
         << p3.second.first << " " << p3.second.second << endl;

    pair<int, int> p4(58, 69);
    cout << p4.first << " " << p4.second << endl;

    // pair array
    pair<int, int> arr[5] = {{5, 9}, {8, 3}, {21, 56}};
    for (auto &it : arr)
        cout << it.first << " " << it.second << endl;

    // updating the values and traversing a pair array
    pair<int, int> ar1[3] = {{1, 2}, {3, 4}, {5, 6}};
    for (auto it : ar1)
        cout << it.first << '\t' << it.second << endl;
    for (auto &it : ar1) // using the & will let you access the memory location and you can also manipulate it in no time.
    {
        it.first *= 2;
        it.second *= 2;
    }
    cout << '\n'
         << '\n';
    for (auto it : ar1)
        cout << it.first << '\t' << it.second << endl;

    // similar to pair but its map
    // map[key] = value;
    cout << endl
         << "Map" << endl;
    map<int, int> mp;
    mp[5] = 1;
    mp[55] = 11;
    mp[55] = 11;
    mp[56] = 61;

    for (auto it : mp)
        cout << it.first << '\t' << it.second << endl
             << endl;

    // ANOTHER MAP SNIPPET
    map<int, vector<int>> mp1;

    vector<int> temp;
    // mp1[50]=temp;

    mp1[60] = {10, 2, 3};

    mp1[70] = {10, 20, 30};
    mp1[69] = {100, 20, 300};
    mp1[68] = {110, 210, 301};

    for (auto it : mp1)
    {
        cout << it.first << " -> ";
        for (auto it : it.second)
            cout << it << '\t';
        cout << endl;
    }

    /*
        what if someone ask you to store, more than two values in the pairs?
        there comes the nested property of the pairs, that means we can use the pairs, inside a pair.

    */
    cout << endl
         << "Nested Pairs" << endl;
    pair<int, pair<int, int>> p5 = {6, {8, 9}};

    pair<pair<int, int>, pair<int, pair<int, int>>> p6 = {p1, p5};

    cout << p6.first.first << " " << p6.first.second << endl;
    cout << p6.second.first << "  " << p6.second.second.first << " " << p6.second.second.second << endl;

    pair<string, string> p7 = {"Rajarshi Das pin = 712232", "Rupak Das pin = 123456"};
    cout << p7.first << '\t' << p7.second << endl;

    return 0;
}