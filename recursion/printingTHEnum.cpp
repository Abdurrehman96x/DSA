#include <iostream>
using namespace std;
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
int main(){
    int n= 10;
    inc(n);
    dec(n);
    return 0;
}