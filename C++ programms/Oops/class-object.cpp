#include <iostream>
using namespace std;
class print{
    public:
    void show(){
        cout<<"Hello World";
    }
};
int main() {
    print p;
    p.show(); // This line would cause a compilation error because show() is private
    return 0;
}