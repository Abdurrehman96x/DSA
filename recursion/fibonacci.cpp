#include <iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    int pre_fib = fib(n-1) + fib(n-2);
    return pre_fib;
}
int main(){
    int n;
    cout<<"enter the number for fibonacci ";
    cin>>n;
    cout<<fib(n);
    return 0;
}