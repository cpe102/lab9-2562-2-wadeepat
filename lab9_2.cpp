
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
    ifstream source;
    source.open("C:\\Users\\lab314-10\\Documents\\lab9\\lab9-2562-2-wadeepat\\cheerbook.txt");
    string text;
    ofstream source1("C:\\Users\\lab314-10\\Documents\\lab9\\lab9-2562-2-wadeepat\\cheerbook_copy.txt");
    source1<<"-------------------- SOTUS ---------------------\n";
    while(getline(source,text)){
        source1<<text<<"\n";
    }
    source1<<"-------------------- SOTUS ---------------------";
    source.close();
    source1.close();
}
