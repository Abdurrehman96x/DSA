//call by reff  and pass by value
#include<iostream>
using namespace std;
void swap1(int x,int y){    //pass by value(copied)
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int *x,int *y){     // call by reffernce
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int x = 10;
    int y = 20;

    int *ptr1 = &x;
    int *ptr2 = &y;

    swap1(x,y);
    cout<<x<<" "<<y<<endl;

    swap2(ptr1,ptr2);
    cout<<x<<" "<<y<<endl;

    return 0;
}