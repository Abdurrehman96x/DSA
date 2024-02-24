#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>90){
        cout<<"A+ grade"<<endl;
    }
    else if(marks>80){
        cout<<"A grade"<<endl;
    }
    else if(marks>70){
        cout<<"B+ grade"<<endl;
    }
    else if(marks>60){
        cout<<"B grade"<<endl;
    }
    else if(marks>50){
        cout<<"C+ grade"<<endl;
    }
    else if(marks>40){
        cout<<"C grade"<<endl;
    }
    
    else{
        cout<<"fail"<<endl;
    }
    
    return 0;
}