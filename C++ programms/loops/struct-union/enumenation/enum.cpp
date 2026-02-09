#include <iostream>
using namespace std;
int main (){
    enum gender{
        male,female,other
    };
    cout<<male<<endl;
    gender g1=other;
    cout<<g1<<endl;
}