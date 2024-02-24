#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int> &v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        //finding min element in unsorted array
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index]){
                min_index =j;
            }
        }
        //placing min element at beginning
        if(min_index != i){
            swap(v[i],v[min_index]);
        }
    return;
    }
}
int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    selection_sort(v);

    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}