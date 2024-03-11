#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    pair<int, int> p1 = {1, 2};
    cout << p1.first << '\t' << p1.second << endl;

    cout << "The enter size of the pair array  = ";
    cin >> n;
    pair<int, int> ar[n];
    cout << endl
         << "Enter values in the pair array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].first;
        cin >> ar[i].second;
    }
    cout << endl
         << "Entered pairs:" << endl;
    for (int i = 0; i < n; i++)
        cout << ar[i].first << '\t' << ar[i].second << endl;
    pair<int, int> p2(60, 20);
    pair<int, int> p3;
    p3 = make_pair(90, 60);
    pair<pair<int, int>, pair<int, int>> p5;
    p5 = {p2, p3};
    cout << p5.first.first << '\t' << p5.first.second << '\t' << '\t' << p5.second.first << '\t' << p5.second.second << endl;

    // traverse the pair array
    cout << "Traversing the pair array:" << endl;
    for (auto it : ar)
        cout << it.first << '\t' << it.second << endl;
    cout << "Manipulating the pair array:" << endl;
    for (auto &it : ar)
    {
        it.first += 2;
        it.second -= 5;
    }
    cout << "Traversing after  manipulation the pair array:" << endl;
    for (auto it : ar)
        cout << it.first << '\t' << it.second << endl;

    pair<string, string> str;
    str = {"Rajarshi Das, age 22", "lives in Hindmotor"};
    cout << str.first << '\t' << str.second << endl;

    // 11/03/2024

    /*
        pair<string, pair<string,string>> p11 = {"Dulal",{"Chandra","Chakraborty"}};
        string s1,s2,s3;
        tie(s1,ignore) = p11;
        tie(s2,s3) = p11.second;    
        cout<<s1<<" "<<s2<<" "<<s3;    
    
    */
        return 0;
}