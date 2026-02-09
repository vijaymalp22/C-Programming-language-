#include <iostream>
using namespace std;
struct student

{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct student s1;
    cout<<"Enter roll number:";
    cin>>s1.roll;
    cout<<"Enter name:";
    cin>>s1.name;
    cout<<"Enter marks:";
    cin>>s1.marks;
    cout<<s1.roll<<endl<<s1.name<<endl<<s1.marks<<endl;
    return 0;

}

