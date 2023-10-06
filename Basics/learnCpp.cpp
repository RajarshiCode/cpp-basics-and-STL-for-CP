#include<bits/stdc++.h>

// #include<iostream>
// #include<string>
// #include<math.h>
/**
 * having an error in #include<bits/stdc++.h>
 * 
 * fixed the c_cpp_properties.json
 * changed the 
 * 
 * "includePath": [
                "C:\\MinGW\\include"
            ],

    and,

    "compilerPath": "C:/MinGW/bin/g++.exe",
 * 
 */

using namespace std;
int main()
{
    int x;
    long num; 
    cout << "Hello World!" << endl<< "I am learning C++" << endl;
    cin >> x;
    cout<<"the entered value = "<<x<<endl;
    long long y = 120000000000;

    /**
     * for integers we will be using 
     * int  10^8, long  10^12, long long 10^18
     * 
     * for decimal values we will be using     * 
     * float, double, long double     * 
     * 
     * for string and getline
     * 
     * 256 character, char
     * 
     */

    string s;
    cin>>s;
    cout<<s; // no space printed

    string str;   
    getline(cin,str); // takes the space also.
    cout<<str;




    return 0;
}
