#include<iostream>
using namespace std;


int main()
{
    int row, col;

    cout<<"Enter the number of row = ";
    cin>>row;

    cout<<"Enter the number of column = ";
    cin>>col;

    int mat[row][col];

    cout<<"Enter the elements of the matrix"<<endl;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)        
            cin>>mat[i][j];
        
    }

    cout<<"The matrix that you have entered"<<endl;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)        
            cout<<mat[i][j]<<'\t';
        cout<<endl;    
        
    }
    return 0;
}