#include<iostream>
using namespace std;
// Print all The possible permutations of a string
void permuatation( string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    for(int i=0;i<s.length();i++){
        char ch= s[i];
        string ros = s.substr(0,i)+s.substr(i+1);
        permuatation(ros,ans+ch);   
    }
}

// Count the No. of paths possible from start to end point in a game board
int countPath(int start,int end){
    if(start==end){
        return 1;
    }
    else if (start>end)
    {
        return 0;
    }
    int count =0;
    for(int i=1;i<=6;i++){
        count += countPath(start+i,end);
    }
    return count;
    
}

// Count the no of paths in a maze
int countPathMaze(int n,int i , int j){
    if((i==n-1) && (j==n-1)){
        return 1;
    }
    if((i>=n) || (j>=n)){
        return 0;
    }
    return countPathMaze(n,i+1,j)+ countPathMaze(n,i,j+1);
}
// given 2 x n board and 2 x 1 tile , count the no of ways
int tilingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1)+ tilingWays(n-2);
}
// friends pairing problem
int frinedsPairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return frinedsPairing(n-1) + frinedsPairing(n-2)*(n-1);
}
// Knapsack problem
int Knapsack(int value[], int wt[],int n, int W){
    if(n==0 || W ==0){
        return 0;
    }
    if(wt[n-1]>W){
        return Knapsack(value,wt,n-1,W);
    }
    return max(Knapsack(value,wt,n-1,W-wt[n-1])+value[n-1], Knapsack(value,wt,n-1,W));
}
int main(){
    //permuatation("ABC","");
    //cout<<countPath(0,3)<<endl;
    //cout<<countPathMaze(3,0,0)<<endl;
    //cout<<tilingWays(4)<<endl;
    //cout<<frinedsPairing(4)<<endl;
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W = 50;
    cout<<Knapsack(value,wt,3,W)<<endl;
    return 0;
}