#include<bits/stdc++.h>
using namespace std;

/*
    array is always passed with the referecne
    but vectors, list, maps and others must be passed using the & sign.


*/


void magic(int ar[])
{
    ar[0]+=100;
    ar[1]+=100;
    cout<<ar[0]<<'\t'<<ar[1]<<endl;

}
int main()
{
    int ar[5];
    ar[0] = 5,ar[1] = 4;  
    cout<<ar[0]<<'\t'<<ar[1]<<endl;  
    magic(ar);
    cout<<ar[0]<<'\t'<<ar[1]<<endl;
    return 0;
}