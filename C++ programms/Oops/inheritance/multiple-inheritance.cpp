#include <iostream>
using namespace std;
int a,b,c;
class A{
    // int a,b;
    public:
     void input();
     void add();
};
void A::input(){
    cout<<"Enter two numbers for a,b: ";
    cin>>a>>b;
}
void A::add(){
    
    c=a+b;
    cout<<"Addition of a and b is: "<<c<<endl;
}
class B{

    public:
   
     void multiply();
};
void B::multiply(){
    c=a*b;
    cout<<"Multiplication of a and b is: "<<c<<endl;
}
class C : public A, public B{
    public:
    void subtract();
    void divide();
};
void C::subtract(){
    c=a-b;
    cout<<"Subtraction of a and b is: "<<c<<endl;
}
void C::divide(){
    if(b!=0){
        c=a/b;
        cout<<"Division of a and b is: "<<c<<endl;
    }
    else{
        cout<<"Division by zero is not allowed."<<endl;
    }
};
int main(){
    C obj;
    obj.input();
    obj.add();  
    obj.multiply();
    obj.subtract();
    obj.divide();
    return 0;
}
