#include <bits/stdc++.h>
using namespace std;

void printArr(int ar[], int n)
{
    int i;
    cout << "The Values are as follows:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "[" << i << "]"
             << "=" << ar[i] << endl;
    }
}
int main()
{

    int n, i;
    cout << "Enter the Size of the array:" << endl;
    cin >> n;

    int ar[n];
    cout << "Enter the values inside array:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "[" << i << "]"
             << "= ";
        cin >> ar[i];
    }
    printArr(ar, n);

    return 0;
}

// cin>>ar[0]>>ar[1]>>ar[2];
// cout<<ar[0]<<'\t'<<ar[1]<<'\t'<<ar[2];