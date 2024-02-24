#include <iostream>
using namespace std;
int recursive_sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum= recursive_sum(n-1);
    return n + prevSum; 
}
int main(){
    int n , sum;
    cout<<'enter the number';
    cin>>n;
    sum = recursive_sum(n);
    cout<<sum;
    return 0;
}