#include <iostream>
using namespace std;
class A{
    public:
    void person(){
        cout<<"Vihaymal"<<endl;

    }
};
class B: public A{
    public:
    void person(){
        int num1,num2,num3,s,m;
        cout<<"Enter three numbers: ";
        cin>>num1>>num2>>num3;
        s=num1+num2+num3;
        m=s/3;
        cout<<"Sum is: "<<s<<endl;
        cout<<"Average is: "<<m<<endl;
    }
};
int main(){
    B obj;
    obj.A::person();
    obj.person(); // calls the overridden version of person() in class B
    return 0;
}