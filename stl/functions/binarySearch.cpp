#include<bits/stdc++.h>
using namespace std;
/*
    you have to use a sorted array
    first_iterator = a or a+0
    last_iterator = a+n
    binary_search(first_iterator, last_iterator, element)
    Time Complexity :
    log(n)
*/
int main()
{
    int ar[] = {1,3,4,9,10};
    cout<<binary_search(ar,ar+5,9); // will return 1 if present else 0.
    return 0;
}