#include <iostream>
using namespace std;
int main (){
int age;
cout<<"enter your age:";
cin>>age;
if(age>=18){
    goto canvote;
}
else{
    goto cantvote;
}
canvote:
    cout<<"you can vote"<<endl;
    return 0;
cantvote:
    cout<<"you cannot vote"<<endl;    
return 0;
}