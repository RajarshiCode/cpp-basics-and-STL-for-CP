#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{
    int ar[] = {1, 2, 3, 6, 45, 1, 2, 6, 9, 8, 8, 458, 1, 6, 6, 66, 10};
    int n = end(ar) - begin(ar);
    cout << "the size of the array = " << n << endl;
    cout << "Before sorting the array: " << endl;
    for (auto i : ar)
        cout << i << '\t';
    cout << endl;
    sort(ar, ar + n, greater<int>()); // decending
    // sort(ar, ar+n); // ascending order
    cout << "After sorting the array: " << endl;
    for (auto i : ar)
        cout << i << '\t';
    cout << endl;

    pair<int, int> pr[] = {{1, 2}, {2, 1}, {4, 1}, {5,6},{1,6},{6,1},{10,2},{2,2}};
    /*
        sort according to the second element, if second element is same then, sort it sccording to the first element but in increasing order.

        {1, 2}, {2, 1}, {4, 1} ----- {4, 1}, {2, 1} ,{1, 2}
    */


    cout<<"before sorting"<<endl;
    for (auto i : pr)
        cout
            << i.first << '\t' << i.second << endl;

    sort(pr, pr + (end(pr)-begin(pr)), comp);
    cout<<"after sorting"<<endl;
    for (auto i : pr)
        cout << i.first << '\t' << i.second << endl;
    cout << endl;
    return 0;
}