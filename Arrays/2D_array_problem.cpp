#include<iostream>
#include<vector>
using namespace std;

int Rotation_Of_matrix(){
    int n,m;
    
    cout<<"Enter the Rows in Matrix : ";
    cin>>n;
    cout<<"Enter the columns in Matrix: ";
    cin>>m;
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Rotation OF MATRIX IS :"<<endl;
    int A_transpose[m][n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            A_transpose[i][j]=A[j][i];
        }
    }
    for(int i =0;i<m;i++){
        for(int j =0; j<n;j++){
            cout<<A_transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        reverse_iterator(A_transpose[i].begin(),A_transpose.end());
    }
    
}
int matrix_multiplication(){
    int r1,c1;
    
    cout<<"Enter the Rows in Matrix A: ";
    cin>>r1;
    cout<<"Enter the columns in Matrix A: ";
    cin>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    int r2,c2;
    
    cout<<"Enter the Rows in Matrix B: ";
    cin>>r2;
    cout<<"Enter the columns in Matrix B: ";
    cin>>c2;
    int B[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
        cout<<endl;
    }
    if(c1!=r2){
        cout<<"Matrix Multiplication Not Possible;";
    }
    int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j =0;j<c2;j++){
            int value =0;
            for(int k=0;k<r2;k++){
                 value+=A[i][k]*B[k][j];

            }
            C[i][j]= value;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
int transpose_Of_matrix(){
    int n,m;
    
    cout<<"Enter the Rows in Matrix : ";
    cin>>n;
    cout<<"Enter the columns in Matrix: ";
    cin>>m;
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    cout<<"TRANSPOSE OF MATRIX IS :"<<endl;
    int A_transpose[m][n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            A_transpose[i][j]=A[j][i];
        }
    }
    for(int i =0;i<m;i++){
        for(int j =0; j<n;j++){
            cout<<A_transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"THE ORIGINAL MATRIX IS :"<<endl;
    for(int i =0;i<n;i++){
        for(int j =0; j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    matrix_multiplication();
    return 0;
}