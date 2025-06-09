#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("z.txt");
    fout << "Hello Everyone.\n";
    fout << "How are you?\n";
    fout << "How is your study?\n";
    fout.close();

    //* How to read each string that is written in above file.
    ifstream fin;
    fin.open("z.txt");

    string line;
    while (getline(fin, line)) // Here getline is a looping function where fin is the file & line is a string , & fin means to read whole line & copy it into line. & it will stop where our file is ended.
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}