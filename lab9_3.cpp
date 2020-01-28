//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    ifstream score("C:\\Users\\lab314-10\\Documents\\lab9\\lab9-2562-2-wadeepat\\score.txt");
    string text;
    int N=0;
    double x1,x2;
    while(getline(score,text)){
        x1+=atof(text.c_str());
        x2+=pow(atof(text.c_str()),2);
        N++;
    }
    cout<<"Number of data = "<<N<<endl;
    cout<<"Mean = "<<x1/N<<endl;
    cout<<"Standard deviation = "<<sqrt((x2/N)-pow((x1/N),2));
}