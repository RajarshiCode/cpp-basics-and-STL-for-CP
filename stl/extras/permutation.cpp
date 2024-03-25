#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "321";
    // sort(s.begin(),s.end());
    //string s = "123";
    string s = "321";
    
    do{
        cout<<s<<endl;
    }while(prev_permutation(s.begin(),s.end())); // while(next_permutation(s.begin(),s.end()));
    // if there is no permuataion left then returns false
    //cout<<"previous permuatation = "<<prev_permutation(s.begin(),s.end());
    cout << endl;
    return 0;
}