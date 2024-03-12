#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << endl
         << "Sorting the List in ascending order: " << endl;

    list<int> ls1;
    ls1 = {19, 18, 17, 16, 15, 14, 13, 12, 11};

    cout << "Before : ";

    for (auto it : ls1)
        cout << it << '\t';

    cout << endl
         << "After : ";
    ls1.sort();
    // ls1.sort(greater<int>()); // descending order
    for (auto it : ls1)
        cout << it << '\t';
    cout << endl;
    cout << endl;
    return 0;
}