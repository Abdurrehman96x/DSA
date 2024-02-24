#include<iostream>
#include<vector>
using namespace std;
void spiralOrder(vector<vector<int>> &matrix){
    int left=0;
    int right=matrix[0].size()-1;
    int top =0;
    int bottom = matrix.size()-1;

    int direction =0;

    while(left<=right && top<=bottom){
        // left -> right
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<matrix[top][col]<<" ";
            }
            top++;
        }
        // top-> bottom
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                cout<<matrix[row][right]<<" ";
            }
            right--;
        }
        //right -> left
        else if(direction==2){
            for(int col=right;col>=left;col--){
                cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
        }
        //bottol-> top
        else{
            for(int row =bottom;row>=top;row--){
                cout<<matrix[row][left]<<" ";
            }
            left++;
        }
        direction = (direction+1)%4 ; // 0 1 2 3
    }
}
 
 void SpiralOrderMatrix(vector<vector<int>> &m){
    int left=0;
    int right=matrix-1;
    int top =0;
    int bottom = n-1;

    int direction =0;
    int value =1;

    while(left<=right && top<=bottom){
        // left -> right
        if(direction==0){
            for(int col=left;col<=right;col++){
                n[top][col]=value++;
            }
            top++;
        }
        // top-> bottom
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                n[row][right]= value++;
            }
            right--;
        }
        //right -> left
        else if(direction==2){
            for(int col=right;col>=left;col--){
                n[bottom][col]=value++;
            }
            bottom--;
        }
        //bottol-> top
        else{
            for(int row =bottom;row>=top;row--){
                n[row][left]= value++;
            }
            left++;
        }
        direction = (direction+1)%4 ; // 0 1 2 3
    }
    return n;
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int> (n));
    matrix = CreateSprialMatrix(n);
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    /*int row,col;
    cout<<"Enter the Rows in Matrix : ";
    cin>>row;
    cout<<"Enter the columns in Matrix: ";
    cin>>col;
    vector<vector<int>>matrix(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>matrix[i][j];

        }
    }
    spiralOrder(matrix);
*/
    return 0;
}