#include <iostream>
using namespace std;
int main(){
    int num1 = 6;
    int num2 = 4;
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1%num2<<endl;
    //cout<<num2++<<endl; //Doubt
    //cout<<num2--<<endl; //Doubt
    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>num2)<<endl;
    cout<<(num1<num2)<<endl;
    cout<<(num1>=num2)<<endl;
    cout<<(num1<=num2)<<endl;//0 = false ,1 = true

    // Logical operators
    /*bool num3 = true;
    bool num4 = false;
    cout<<(num3&&num4)<<endl;
    cout<<(num3||num4)<<endl;
    cout<<(!num3)<<endl;
    cout<<(!num4)<<endl;*/
    num1+=3;
    cout<<num1<<endl;
    num2+=num1;
    cout<<num2<<endl;

    int num5 = 5;// 0101
    cout<<(num5<<1)<<endl;// left shift = multiply by 2
    cout<<(num5>>1)<<endl;// divide by 2
    int num6 = 6;//0110
    cout<<(num5&num6)<<endl;//0100
    cout<<(num5|num6)<<endl;//0111
    cout<<(num5^num6)<<endl;//0011


    int a =4;
    cout<<sizeof(a)<<endl; //4
    char name ='c';
    cout<<sizeof(name)<<endl; //1

    bool flag;
    a==name? flag = true : flag = false;
    cout<<flag<<endl;// 0(False)

    cout<<(&a)<<endl;// print its address
 
    //Post and pre increment
    int z = 5;
    cout<<(z++)<<endl;// 5
    cout<<(++z)<<endl;//6
    cout<<(z--)<<endl; //5
    cout<<(--z)<<endl;//4
    

    int c = 3;
    cout<<(c++)<<endl; // 3 show karega but is k baad ye increment bhi hoga
    cout<<c<<endl;

        return 0;
}