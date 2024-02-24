#include<iostream>
using namespace std;
int main(){
    int x= 34;
    int *ptr1 = &x;
    cout<<&x<<" "<<ptr1<<" "<<*ptr1<<endl;
    x=69;
    cout<<x<<"  "<<*ptr1<<endl;
    //updating the value of x with pointer
    *ptr1 = 100;
    cout<<x;
    return 0;

}