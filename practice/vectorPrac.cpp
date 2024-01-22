#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.emplace_back(10);

    vector<pair<string, string>> v2;
    v2.push_back({"Rajarshi", "Das"});

    for (auto it : v2)
        cout << it.first << '\t' << it.second << endl;

    // copy the vector to another vector
    vector<pair<string, string>> v3(v2);

    vector<pair<int, int>> v4(10, {5, 10});
    for (auto it : v4)
        cout << it.first << '\t' << it.second << endl;

    // lets check the size
    cout << "Size of thr vectors :-" << v1.size()<<'\t'
                                    << '\t' 
                                    << v2.size()
                                    << '\t' 
                                    << v3.size() 
                                    << '\t' 
                                    << v4.size() 
                                    << endl;





    
    return 0;
}