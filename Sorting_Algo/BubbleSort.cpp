#include<iostream>
#include<vector>
using namespace std;
void Optimised_bubbleSort(vector<int> &v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                flag= true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break;

    }

    return;
}

void bubbleSort(vector<int> &v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the Size of array: ";
    cin>>n;

    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    //bubbleSort(v);
    Optimised_bubbleSort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}