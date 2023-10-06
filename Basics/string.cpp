#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "rajarshi das";
    int len = s.size();
    
    cout<<s[0]<<'\t'<<s[s.length()-1]<<endl;
    cout<<s<<endl;


    string str;
    cout<<"Enter a sentence = ";
    getline(cin,str); // this is used to take the space and after space input also.
    cout<<endl<<"The sentence = "<<str;

    return 0;
}