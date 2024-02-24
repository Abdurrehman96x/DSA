#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x:";
    cin>>x;
    int occurance = 0;
    for(int i =0;i<v.size();i++){
        if(v[i]==x){
            occurance+=1;
        }
    }
    cout<<occurance;
    
    /*int n;
    cin>>n;
    for(int i=1 ;i<=n;i++){
        for(int j=1 ; j<=6;j++){
            cout<<j;
        }
        cout<<endl;
    }
    /*for(int i=1; i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;

        }
        for(int j=1 ;j<=(i-1);j++){
            cout<<j;
        }
        cout<<endl;
    } */
    
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){ //for space
            cout<<" ";
            }
        for(int j=1;j<=(2*i-1);j++){ // for stars
            cout<<"*";
        }
        
        cout<<endl;
    } */
    return 0;
}