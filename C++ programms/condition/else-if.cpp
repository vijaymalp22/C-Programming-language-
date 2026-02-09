#include <iostream>>
using namespace std;
int main() {
    int a,b,ch;
    cout << "Enter two noo.. integer: ";
    cin >> a>>b;
    cin>>ch;
if(ch==1){
        int add=a+b;
        cout<<"addition is"<<add;

    }
else if(ch==2){
        int sub=a-b;
        cout<<"subtraction is"<<sub;
    }
else if(ch==3){
        int mul=a*b;
        cout<<"multiplication is"<<mul;
    }
else if(ch==4){
        int div=a/b;
        cout<<"division is"<<div;
    }
else{
        cout<<"invalid choice";
    }

}