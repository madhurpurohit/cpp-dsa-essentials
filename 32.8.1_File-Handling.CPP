#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    // system("clear");
    //* How to open file & than we can write on it.
    ofstream fout;
    fout.open("zoom.txt"); // It will open this zoom.txt file in it's directory, & if this file is not present their than it will automatically create this file & than open it.

    fout << "Hello Everyone.\n";

    fout.close(); // This will close the file, so we can release our all the resource which can handle this file.

    //* How to read data on a file.
    ifstream fin;
    fin.open("zoom.txt");

    char c;
    // fin >> c; // It will read character by character. & it will not consider space, tab or enter so it will not print it.

    c = fin.get();     // With the help of this we can print space & tab.
    while (!fin.eof()) // Here eof() means end of file.
    {
        cout << c;
        //* Going to next character.
        // fin >> c;

        c = fin.get();
    }

    fin.close();

    //* How to copy vector element in another file.
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the element: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ofstream fou;
    fou.open("zero.txt");

    for (int i = 0; i < n; i++)
        fou << arr[i] << " ";

    fou.close();

    return 0;
}