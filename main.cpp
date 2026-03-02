//COMSC 210 | Lab 15 | Alexander Sierra
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

const int W = 20; //for formatting

class Movie{
private:
//private member variables
    string writer;
    int year;
    string title;
public:
//setters and getters
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
    //declarations
    vector<Movie> movies_v;
    ifstream fin ("input.txt");
    //holds temporary data
    string w;
    int y;
    string t;
    //reads file then stores it in temp and puts temp into movies_v
    if (fin.good()) {
        while (getline(fin, t)) {
            fin >> y;
            fin.ignore();
            fin >> w;
            fin.ignore();
            Movie temp;
            temp.setWriter(w);
            temp.setYear(y);
            temp.setTitle(t);
            movies_v.push_back(temp);
        }
        fin.close();
    }
    else {
        cout << "Input file not found." << endl;
    }
    //outputs
    for (auto movie : movies_v) {
        movie.print();
    }

    return 0;
}