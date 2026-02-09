#include <iostream>
using namespace std;
class studentDetails
{
string name;
int age ;
int rollNumber;
int clas;
public:
void setDetails(string n, int a, int r, int c)
{
name = n;
age = a;    
rollNumber = r;
clas = c;

}
void displayDetails()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;   
    cout<<"Roll Number: "<<rollNumber<<endl;
    cout<<"Class: "<<clas<<endl;

};
};
int main() {
    studentDetails student1;
    student1.setDetails("Alice", 20, 101, 12);
    student1.displayDetails();

    studentDetails student2;
    student2.setDetails("Bob", 21, 102, 12);
    student2.displayDetails();

    return 0;
}

