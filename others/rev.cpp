#include <iostream>
#include <vector>
using namespace std;
int prof_loss(int sp,int cp){
    if(sp>cp){
        int prof;
        prof = sp-cp;
        cout<<"Profit is:"<<prof;
    }
    else if(cp>sp){
        int loss;
        loss = cp-sp;
        cout<<"Loss is:"<<loss;

    }
    else{
        cout<<"NO PROFIT NO LOSS!";
    }
    return 0;
}
int target_sum(){
    vector <int> v(6);
    cout<<"Enter the element in array:";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter The sum:";
    int sum;
    cin>>sum;
    int target_sum=0;
    for(int i =0;i<v.size();i++){
        for(int j= i+1;j<v.size();j++){
            if(v[i]+v[j]==sum){
            target_sum+=1;
        }
        }
    }
    cout<<target_sum;
    return 0;
}

int main(){
    /*vector<int>v(7);
    for(int i =0;i<7;i++){
        cin>>v[i];
    }
    cout<<"Enetr x:";
    int x;
    cin>>x;
    int occurance;
    for(int i =0;i<v.size();i++){
        if(v[i]==x){
            occurance =x;

        }
        
    }
    cout<<occurance;*/
    target_sum();

    return 0;
}