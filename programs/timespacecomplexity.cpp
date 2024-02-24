#include <iostream>
using namespace std;
int sum_in_range(int x , int y ){
    int sum =0;
    for(int i=x;i<=y;i++){
        sum+=i;
    }
    cout<<sum<<endl;
}
int sum_in_range_optimised(int x,int y){
    int n;
    int sum;
    n =(y-x+1);
    sum = (n*(2*x+(n-1)*1))/2;
    cout<<sum;
}
int main(){
    sum_in_range(2,6);
    sum_in_range_optimised(2,6);
    return 0;
}