#include<iostream>
#include<vector>
using namespace std;
int maximum_OnesRow(vector<vector<int>>&v){
    
    int maxOnes = INT8_MIN;
    int maxOnesRow = -1;
    int columns =v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j =0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numOfOnes= columns -j;
                if(numOfOnes>maxOnes){
                    maxOnes =numOfOnes;
                    maxOnesRow =i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}
int main(){
    int row,col;
    cout<<"Enter the Numbers of Rows: ";
    cin>>row;
    cout<<"Enter the Numbers of Columns: ";
    cin>>col;
    vector<vector<int>>vec(row,vector<int> (col));
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>vec[row][col];
        }
    }
    int res = maximum_OnesRow(vec);
    cout<<res<<endl;
    return 0;
}