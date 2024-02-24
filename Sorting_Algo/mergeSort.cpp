#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid,int r){
    int an = mid-l+1;
    int bn = r-mid;
    // creating 2 temp array
    int a[an];
    int b[bn];

    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+l+j];
    }

    int i=0;    // first subarry a
    int j=0;    // second subarray b
    int k=l;    //merge subarray

    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(i<bn){
        arr[k++]=b[j++];
    }
}
void merge_sort(int arr[],int l,int r){
    // base case
    if(l>=r){
        return;
    }
    int mid = (l+r)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main(){
    int arr[] = {10,28,24,6,34,18,38,44};
    int n = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}