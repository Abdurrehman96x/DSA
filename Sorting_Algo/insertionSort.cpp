#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int> &v){
    int n= v.size();
    for(int i=1;i<n;i++){
        int current_element= v[i];
        // find the correct position of current element
        int j = i-1;
        while(j>=0 && v[j]>current_element){    // v[i-1] > v[i
            v[j+1]= v[j];
            j--;
        }
        //insertion of current element
        v[j+1] = current_element;
    }
    return;
}
    
int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    insertion_sort(v);

    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}