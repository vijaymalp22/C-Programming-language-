#include <iostream>
using namespace std;
struct Point {
    int x;
    int y;
    float z;
    double w;
};
union  vm
{
    int a;
    int y;
    float b;
    double c;
};
int main(){
    struct Point p1;
    union vm v1;
    cout << "Size of struct Point: " << sizeof(p1) << " bytes" << endl;
    cout << "Size of union vm: " << sizeof(v1) << " bytes" << endl;
    // p1.x=10;
    // p1.y=20;
    // p1.z=30.5;
    // p1.w=40.56789;

    // cout<<"Struct Point values:"<<endl;
    // cout<<"x: "<<p1.x<<endl;
    // cout<<"y: "<<p1.y<<endl;
    // cout<<"z: "<<p1.z<<endl;
    // cout<<"w: "<<p1.w<<endl;

    // v1.a=100;
    // cout<<"\nUnion vm values after assigning a=100:"<<endl;
    // cout<<"a: "<<v1.a<<endl;

    // v1.b=50.5;
    // cout<<"\nUnion vm values after assigning b=50.5:"<<endl;
    // cout<<"a: "<<v1.a<<endl; // a's value is now changed
    // cout<<"b: "<<v1.b<<endl;

    return 0;
}
