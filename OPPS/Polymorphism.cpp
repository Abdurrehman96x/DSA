#include <iostream>
using namespace std;
// Run Time Polymorphism
class Parent{
    public:
    virtual void print(){   // Virtual is used for over-riding
        cout<<"Parent Class"<<endl;
    }
    void show(){
        cout<<"parent Class"<<endl;
    }
};
class Child: public Parent{
    public:
    void print(){
        cout<<"Child Class"<<endl;
    }
    void show(){
        cout<<"child Class"<<endl;
    }
};

// Function Obverloading
class Sum{

    public:
    void sum(int x,int y){
        int sum= x+y;
        cout<<sum<<endl;
    }
    void sum(int x,int y,int z){
        int sum= x+y+z;
        cout<<sum<<endl;
    }
    void sum(float x,float y){
        float sum= x+y;
        cout<<sum<<endl;
    }
};

// Operator Overloading
class Complex{
    public:
    int real;
    int img;

    Complex(int x,int y){
        real =x;
        img= y;
    }
    Complex operator+ (Complex &c){
        Complex ans(0,0);
        ans.real =real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

// Friend function
class A{
    int x ;
    public:
    A(int y){
        x=y;
    }

    friend void print(A &obj);
};
void print(A &obj){
    cout<<obj.x<<endl;
}
int main(){
    /*Sum s;
    s.sum(2,3);
    s.sum(2,3,5);
    s.sum(float(2.5),float(6.3));
    */
    // Operator Overloading
    /*Complex c1(1,2);
    Complex c2(1,4);
    Complex c3 = c1+c2;
    cout<<c3.real<<" i"<<c3.img<<endl;
    */
   /*
    Parent *p;
    Child c;
    p = &c;
    p->print();
    p->show();
    */
    A obj(5);
    print(obj);

    return 0;
}