#include<iostream>
#include<vector>
using namespace std;
int Rectangle_sum3(vector<vector<int>>&matrix,int l1,int r1,int l2,int r2){  //MEthod 3 Prefix Sum Matrix ROW AND Col wise
    int sum =0;
    //Prefix sum row wise
    for(int i = 0;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    //Prefix sum col wise
    for(int i = 1;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i-1][j];
        }
    }
    //Printing of Prefix sum
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int top_sum=0,left_sum=0,topleft_sum=0;
    if(l1!=0) top_sum = matrix[l1-1][r2];
    if(r1!=0) left_sum = matrix[l2][r1-1];
    if(l1!=0 && r1!=0) topleft_sum = matrix[l1-1][r1-1];
    sum = matrix[l2][r2]-top_sum-left_sum+topleft_sum;
    return sum;
}

int Rectangle_sum2(vector<vector<int>>&matrix,int l1,int r1,int l2,int r2){  //MEthod 2 Prefix Sum Matrix Row wise
    int sum =0;
    for(int i = 0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    for(int i = l1;i<=l2;i++){
        if(r1!=0){
            sum+=matrix[i][r2]-matrix[i][r1-1];
        }
        else{
            //matrix[i][r1-1]=0
            sum+=matrix[i][r2];
        }
    }
    
    return sum;
}

int Rectangle_sum(vector<vector<int>>&matrix,int l1,int r1,int l2,int r2){  //MEthod 1 Brute Force
    int sum =0;
    for(int i = l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}
int main(){
    int row,col;
    cout<<"Enter the Number of Rows:"<<endl;
    cin>>row;
    cout<<"Enter the Number of Columns:"<<endl;
    cin>>col;
    vector<vector<int>>matrix(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"Enter l1:";
    cin>>l1;
    cout<<"Enter r1:";
    cin>>r1;
    cout<<"Enter l2:";
    cin>>l2;
    cout<<"Enter r2:";
    cin>>r2;

    //output of matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = Rectangle_sum3(matrix,l1,r1,l2,r2);
    cout<<"sum:"<<sum<<endl;
    return 0;
}