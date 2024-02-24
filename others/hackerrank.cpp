#include <iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d){
    int gre;
    if(a>b && a>c && a>d){
        gre = a;
    }
    else if(b>a &&b>c && b>d){
        gre = b;
    }
    else if(c>a && c>b && c>d){
        gre = c;
    }
    else{
        gre = d;
    }
    cout<<gre;
    return 0;
    
}
int main(){
    int a ,b , c, d;
    cin>>a>>b>>c>>d;
    max_of_four(a,b,c,d);

}