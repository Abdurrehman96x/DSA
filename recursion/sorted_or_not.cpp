#include <iostream>
using namespace std;
bool sorted(int arr[],int n){   // n is the size of array
    if(n==1){
        return true;
    }
    bool rest_array = sorted(arr+1,n-1);
    return(arr[0]<arr[1] && rest_array);
}
int main(){
    int arr[] ={1,2,7,4,5};
    cout<<sorted(arr,5);
    return 0;
}