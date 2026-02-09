#include <iostream>
#include <fstream>
using namespace std;    
int main(){
    ofstream outFile;
    outFile.open("example.txt");
    outFile<<"This is a sample text file."<<endl;
    outFile<<"It contains multiple lines of text."<<endl;
    outFile.close();

    ifstream inFile;
    inFile.open("example.txt");
    string line;
    while(getline(inFile, line)){
        cout<<line<<endl;
    }
    inFile.close();
    return 0;
}