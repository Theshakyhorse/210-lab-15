//COMSC 210 | Lab 15 | Alexander Sierra
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

const int W = 15, SIZE = 4;

class Movie{
private:
    string writer;
    int year;
    string title;
public:
    string getWriter() {return writer;}
    void setWriter(string w) {writer = w;}
    int getYear() {return year;}
    void setYear(int y) {year = y;}
    string getTitle() {return title;}
    void setTitle(string t) {title = t;}

    void print() {
        cout << setw(W) << "Movie: " << title << endl;
        cout << setw(W) << "Year released: " << year << endl;
        cout << setw(W) << "Screenwriter: " << writer << endl << endl;
    }
};

int main() {

    return 0;
}