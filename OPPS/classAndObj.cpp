#include <iostream>
using namespace std;
class Fruits{
    public:
    string name;
    string color;
};

// Constructors & Destructor
class Rectangle{
    public:
    int l;
    int b;

    Rectangle(){    // Default Constructor
        l=0;
        b=0;
    }

    Rectangle(int x,int y){ // Parameterised contructor
        l=x;
        b=y;
    }
    Rectangle(Rectangle& r){ // Copy consttructor
        l=r.l;
        b=r.b;
    }
    ~Rectangle(){   // Destructor
        cout<<"DESTRUCTOR IS CALLED"<<endl;
    }
};

// ENCAPSULATION
class ABC{
    int x;
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};

//INHERITANCE
class Parent{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
class child1: public Parent{
    // x will be public
    // y will be protected
    // z will not be accessible
};
class child3: private Parent{
    // x will be private
    // y will be private
    // z will not be accessible
};
class child2: protected Parent{
    // x will be protected
    // y will be protected
    // z will not be accessible
};
// Type of inheritance
// Single inheritance

class PARENT1{
public:
    PARENT1(){
        cout<<"PARENT1 CLASS"<<endl;
    }
};
class PARENT2{
public:
    PARENT2(){
        cout<<"PARENT2 CLASS"<<endl;
    }
};
class CHILD: public PARENT1,public PARENT2{
public:
    CHILD(){
        cout<<"CHILD CLASS"<<endl;
    }
};
class GRAND_CHILD: public CHILD{
    public:
    GRAND_CHILD(){
        cout<<"GRAND CHILD"<<endl;
    }
};

int main(){
    /*
    // 1st METHOD
    Fruits apple;
    apple.name = "Apple";
    apple.color ="Red";
    cout<<apple.name<<"--"<<apple.color<<endl;
    // 2nd METHOD (Object pointer)
    Fruits *mango = new Fruits();
    mango->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<"--"<<mango->color<<endl;
    */
    /*Rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;
    Rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;
    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    */
    /*
    // Encapsulation
    ABC obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl;
    */

    // INHERITANCE
    /*
    Parent p;
    p.x;
    cout<<p.x;
    */
   // TYpe of inheritance 
   // single inheritance
    //CHILD c;
    // MUlti-inheritance
    //GRAND_CHILD gc;

// multiple inheritance
    CHILD c;

    return 0;
}