#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int ar[n];
    cout<<"Enter the elements"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>ar[i];
    } 

    for(int i = 0;i<n;i++)
    {
        cout<<ar[i]<<'\t';
    }     
    // cin>>ar[0]>>ar[1]>>ar[2];
    // cout<<ar[0]<<'\t'<<ar[1]<<'\t'<<ar[2];



    return 0;
}