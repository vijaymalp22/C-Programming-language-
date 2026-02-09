#include <iostream>
using namespace std;
class vijaymal{
   private:
    // string tv;                          

   public:
   string tv;
    void show(){
        tv="match 2025";

    }

    // Declare friend function
    friend void ankush(vijaymal r);
};
// Definition of friend function
void printWidth(vijaymal r) {
    cout << "mai match dekh rha hu : " << r.tv << endl;
}   
int main() {
    vijaymal a;
    a.show();
    printWidth(a); // Call friend function
    return 0;
}