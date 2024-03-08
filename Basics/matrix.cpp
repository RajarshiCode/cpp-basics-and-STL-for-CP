#include<bits/stdc++.h>
using namespace std;

void printMat(int *ar,int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){ 
            cout<<*(ar+ i*row + j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    
    int row,col,i,j;
    cout<<"Enter the Dimension of the matrix:"<<endl;
    cout<<"Rows:"<<endl;
    cin>>row;
    cout<<"Columns:"<<endl;
    cin>>col;
    
    int mat[row][col];
    cout<<"Enter the values in the matrix:"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"["<<i<<"]"<<"["<<j<<"]"<<"= ";
            cin>>mat[i][j];
        }
    }
    cout<<"values in the Matrix:"<<endl;
    printMat(mat[0],row,col);   
    return 0;
}

//https://stackoverflow.com/questions/8767166/passing-a-2d-array-to-a-c-function