#include <iostream>
using namespace std;
int main (){
    cout<<"Execution started"<<endl;
    int a,b,c;
    cout<<"enter two numbers:";
    cin>>a>>b;
   try
   {
     if(b==0)
     throw b;
      c=a/b;
      cout<<"Result:"<<c;


   }
   catch(int x)
   {
    cout<<"can not devide by"<<x<<endl;
   }
   
    cout<<"Result:"<<c<<endl;
    cout<<"Execution ended"<<endl;
}