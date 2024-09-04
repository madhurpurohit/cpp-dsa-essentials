#include <iostream>
using namespace std;

int main()
{
    //? Create & declare String.
    // string s;
    // cin >> s;
    // cout << s;

    // // Initialize & Declare String.
    // string str = "Madhur";
    // cout << str;

    // string str;
    // getline(cin, str);
    // cout << str << endl;

    // ? Print the size of string.
    // cout << str.size();

    // string s1 = "Madhur", s2 = "Purohit";
    // string s3 = s1 + s2;
    // //? string s3= s1.append(s2); // Another format to combine two strings.
    // cout << s3 << endl;

    //? Add an text at last of the string.
    // s3.push_back('5');
    // //** Alternate Method:- s3=s3+"2001"; OR s3=s3+'p';
    //* s3= s3+'p'. Here ('') it is single quotation so it will consider as an character.
    //* s3= s3+"pa". Here ("") it is double quotation so it will consider as an string.
    // cout << s3 << endl;

    //? Remove last text from string.
    // s3.pop_back();
    // s3.pop_back();
    // cout << s3;

    // Escape Character.
    // string str = "Madhur is pursuing \"B.Tech\" Degree";
    // cout << str << endl;

    // string s = "\\";
    // cout << s << endl;

    //? Reverse the string.
    string s = "Madhur";
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout << s << endl;

    //* Calculate size of string without using .size().
    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    cout << size << endl;
}