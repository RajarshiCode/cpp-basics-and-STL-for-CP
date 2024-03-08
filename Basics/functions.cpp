// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
    Functions are block of codes or group of lines that perform a particular task for you.
    Functions are used to modularise code.
    Functions increases readability
    Functions can be used to replace the same line of code while using for multiple times.
*/
void doSomething1(string s){
    s[0] = 't';
    cout<<s<<'\t';
}
void doSomething2(string &s){
    s[0] = 't';
    cout<<s<<'\t';
}
int main()
{
    string s1 = "raj";
    string s2 = "raj";

    cout<<"pass by value:"<<'\t';
    doSomething1(s1);
    cout<<s1<<endl;

    cout<<"pass by reference:";
    doSomething2(s2);
    cout<<s2<<endl;
    
    return 0;
}