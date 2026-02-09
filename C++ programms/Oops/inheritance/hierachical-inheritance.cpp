#include <iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"Eating food"<<endl;
    }

};
class cat: public animal{
    public:
    void meow(){
        cout<<"Meow Meow"<<endl;
    }
};
class dog: public animal{
    public:
    void bark(){
        cout<<"Bark Bark"<<endl;
    }
};
int main(){
    cat c;
    c.eat(); // inherited from animal class
    c.meow();

    dog d;
    d.eat(); // inherited from animal class
    d.bark();
    return 0;
}