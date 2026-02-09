#include <iostream>
using namespace std;
class A{
    protected:
    int a,b;
    public:
    void inputA(){
        cout<<"Enter two numbers for a,b: ";
        cin>>a>>b;

}
};
class B : public A{
    int c;
    public:
    void add(){
        c=a+b; // a and b are inherited from class A
        cout<<"Addition of a and b is: "<<c<<endl;
       
    }
    void subtract(){
        c=a-b; // a and b are inherited from class A
        cout<<"Subtraction of a and b is: "<<c<<endl;
    }
};
class C : public B{
    int d;
    public:
    void multiply(){
        d=a*b; // a and b are inherited from class A
        cout<<"Multiplication of a and b is: "<<d<<endl;
    }
    void divide(){
        if(b!=0){
            d=a/b; // a and b are inherited from class A
            cout<<"Division of a and b is: "<<d<<endl;
        }
        else{
            cout<<"Division by zero is not allowed."<<endl;
        }
    }
};
int main(){
    C obj;
    obj.inputA();
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();
    return 0;
}
