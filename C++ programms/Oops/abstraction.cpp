#include <iostream>
using namespace std;
class myBank{
    private:
    int atmpin,balance;
   public:
   string bankname,IFSC;
void input(){
    atmpin=1234;
    balance=50000;
    bankname="SBI Bank";
    IFSC="SBIN0000456";
}
void output(){
    cout<<"----Bank Details----"<<endl;
    cout<<"Bank Name: "<<bankname<<endl;
    cout<<"IFSC Code: "<<IFSC<<endl;
    cout<<"ATM Pin: "<<atmpin<<endl;
    cout<<"Balance: "<<balance<<endl;
}
};
int main(){
    myBank b;
    b.input();
    b.output();
    cout<<"raj trying to bank details accces"<<endl;
    cout<<"Bank Name: "<<b.bankname<<endl;
    cout<<"IFSC Code: "<<b.IFSC<<endl;
    // cout<<"Atm pin"<<b.atmpin<<endl; // will give error it is  private
    // cout<<"Balance: "<<b.balance<<endl; // will give error it is private
    return 0;
}
    