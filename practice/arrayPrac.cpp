#include<bits/stdc++.h>
using namespace std;

/*
https://www.shiksha.com/online-courses/articles/array-programs-in-java/

https://www.geeksforgeeks.org/important-functions-of-stl-components-in-c/

*/




void rev(int ar[], int n){
    reverse(ar+0,ar+n);
}

void sortIt(int ar[], int n){
    sort(ar+0, ar+n);
}

int main()
{
    int n=0,i;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int ar[n];

    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
        cin>>ar[i];
    cout<<"The Elements:"<<endl;    
    for(i=0;i<n;i++)
        cout<<ar[i]<<" ";

    cout<<"After reverse: "<<endl;
    rev(ar, n);    
    for(i=0;i<n;i++)
        cout<<ar[i]<<" ";

    cout<<"After Sorting: "<<endl;
    sortIt(ar, n);    
    for(i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}