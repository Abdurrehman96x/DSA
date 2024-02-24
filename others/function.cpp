#include <iostream>
using namespace std;
void rectangle(int n, int m){
    for(int i =1 ; i<=n;i++){
        for(int j=1 ;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return;
}
void hollow_rectangle(int n,int m){
    for(int i= 1; i<=n ;i++){
        for(int j = 1;j<=m;j++){
            if(i==1||j==1||i==n||j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;

    }
    return;
}
void triangluar1(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return;
}
void triangluar2(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return;
}
void pyramid(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    return;
}
void num_pattern1(int n){
    for(int i =1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){
        cout<<j;

        }
        cout<<endl;
    }
}
int factorial_1(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*= i;
        cout<<fact<<" ";
    }
    return 0;
}
int factorial_2(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*= i;

    }
    cout<<fact<<endl;
}
int count_the_digit(int n){
    int digit = 0;
    while (n>0)
    {
        digit++;
        n = n/10;
    }
    cout<<digit<<"\n";    
}
int sum_ofgiven_digit(int n){
    int sum =0;
    while (n>0)
    {
        int lastdigit = n%10;
        sum += lastdigit;
        n=n/10;
    }
    cout<<sum<<"\n";
    
}
void diamond_pattern_alpha(int n){
    for(char i ='A'; i<=n;i++){
        for(char j='A';j<=(n-i);j++){
            cout<<" ";
        }
        for(char j= 'A';j<=(2*i - 1);j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void invrted_pattern(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++){
            cout<<j;
        }
        cout<<endl;
    }
    return;

}
void zero_one_pattern(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if ((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            
        }
        cout<<endl;
    }
    return;
}

void rhomus_pattern(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
            
        }
        for (int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return;
}

void num_paramid(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
            
        }
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return;
}

void palindromic_pattern(int n){   //ERROR ?
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k =2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    return;
    }
}

void rhombus_2(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i =n;i>=1;i--){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    return;
}
int main(){
    int a;
    int b;


    hollow_rectangle(5,5);

    return 0;
}
