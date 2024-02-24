#include<iostream>
#include<vector>
using namespace std;
int main(){             // vector       5 1 2 3 4
    int n;
    cout<<"Enter The no of array";              // for 1 index  0 5 1 2 3 4
    cin>>n;             //prefix sum    0 5 6 8 11 15
                        //  l =1  ,r = 3
                        //ans = v[r]- v[l-1] == v[3]-v[0]
                        // 8-0 = 8

    vector<int>v(n+1,0);    // n+1 because of 1 index type question 
    for(int i=0;i<=n;i++){
        cin>>v[i];
    }
    //Calculate Prefix sum ;
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }

    int q;
    cout<<"Enter The  Number of Querry:";
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans =0;
        // ans = prefix sum [r]- prefix sum[l-1];
        ans = v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
}