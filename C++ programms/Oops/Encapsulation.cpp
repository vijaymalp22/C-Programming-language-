#include <iostream>
using namespace std;
class thief{
    private:
    string name,address, secretcode;
    int mob;
   public:
   void input(){
    name="Raj";
    address="Mumbai";
    mob=987654321;
   }
   void output(){
    cout<<"----Thief Details----"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Mobile Number: "<<mob<<endl;
   };


    
};
int main(){
    thief t;
    t.input();
    t.output();
    cout<<"Police trying to access thief details"<<endl;
    // cout<<"Name: "<<t.name<<endl; // will give error it is private
    // cout<<"Address: "<<t.address<<endl; // will give error it is private
    // cout<<"Mobile Number: "<<t.mob<<endl; // will give error it is private
    return 0;
}