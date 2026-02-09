#include <iostream>
using namespace std;
class Dad{
    protected:// protected members can be accessed in derived class
    int ammount;
    public:
    void input(){
        ammount=100000;
    }


};
class Son : public Dad{
    int money=1432;
    public:
    void output(){
        cout<<"Son's own money: "<<money<<endl;
        cout<<"Son inherited ammount from Dad: "<<ammount<<endl;
    }
};
int main(){
    Son s;
    s.input();
    s.output();
    return 0;
}