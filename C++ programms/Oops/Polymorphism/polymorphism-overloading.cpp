#include <iostream>
using namespace std;    
class A{
    int num1,num2,num3,s,m;
    public:
    void person(){
        cout<<"Enter three numbers: ";
        cin>>num1>>num2>>num3;
        s=num1+num2+num3;
        m=s/3;
        cout<<"Sum is: "<<s<<endl;
        cout<<"Average is: "<<m<<endl;
            
    }
    void person(int a,int b){
        m=a*b;
        cout<<"Multiplication is: "<<m<<endl;
    }

};
int main(){
    A obj;
    obj.person(); // calls the first version of person()
    

    obj.person(5,10); // calls the second version of person()
    return 0;
}