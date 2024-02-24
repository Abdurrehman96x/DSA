#include <iostream>
using namespace std;
int main(){
    // HOMEWORK 1
    /*int len,bre;
    cout<<"Enter the Length:"<<endl;
    cin>>len;
    cout<<"Enter the Breadth:"<<endl;
    cin>>bre;
    if(len == bre){
        cout<<"It is a Square!"<<endl;

    }
    else{
        cout<<"It is a Rectangle!"<<endl;
    } */
    //HOMEWORK 2
    /*int num;
    cout<<"Enter the Number:"<<endl;
    cin>>num;
    if(num<0){
        a = (num)*(-1); 
        cout<<a<<endl;

    }*/

// HOMEWORK 3
   /* int sp,cp;
    cout<<"Enter the Cost Price:"<<endl;
    cin>>cp;
    cout<<"Enter the Selling Price:"<<endl;
    cin>>sp;

    if(sp>cp){
        int profit;
        profit = (sp-cp);
        cout<<"PROFIT!"<<profit<<endl;
    }
    else{
        int loss;
        loss = (cp-sp);
        cout<<"LOSS!"<<loss<<endl;
    }*/

    // HOMEWORK 4
    /*int num;
    cout<<"Enter the Positive Integer:"<<endl;
    cin>>num;
    if(num<0){
        cout<<"The Number is negative and Skipped"<<endl;

    }
    else{
        cout<<"Yes it is a Positive Integer:"<<endl;

    }*/
    //HOMEWORK 5(CALCULATOR)
    /*char op;
    cout<<"Enter the Operation(+,-,*,/)"<<endl;
    cin>>op;
    float num1,num2;
    cout<<"Enter the 1st number:"<<endl;
    cin>>num1;
    cout<<"Enter the 2nd number:"<<endl;
    cin>>num2;
    if(op=='+'){
        cout<<((num1)+(num2))<<endl;
       
    }
    else if(op=='-'){
            cout<<((num1)-(num2))<<endl;
    }
    else if(op=='*'){
            cout<<((num1)*(num2))<<endl;
    }
    else if(op=='/'){
            cout<<((num1)/(num2))<<endl;
    }
    else{
        cout<<"Enter The Valid Operation"<<endl;
    }*/
    //loop

    /*int i = 1;
    while(i<7){
        cout<<i<<endl;
        i++;
    }*/
    /*int n;
    cin>>n;
    int i = 1;
    int sum=0;
    while(i<=n){
        sum += i;
       
        i++;

    }
    cout<<"sum is "<<sum<<endl;*/
   //for loop
   /*
    int n;
    cin>>n;
    int sum = 0;

    for(int i=1;i<=n;i++){

        sum += i;
        
    }
    cout<<sum<<endl;*/
int i = 5;
while(true){
    if(i%7==0){
        cout<<i<<endl;
        break;
    }
    i+=5;
}

    return 0;

}