#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=(n-i+1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    
}
    /*int n,m;
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            if(i==1 || j==1 || i==n || j==m){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        cout<<endl;    
    }*/


    
