#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int prev_fact = factorial(n-1);
    return n*prev_fact;
}
int main(){
    int n;
    cout<<"enter the number for factorial ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}