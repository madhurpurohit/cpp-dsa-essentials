//* pro. statement:- Longest prefix & suffix.
//* Question:- Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

// todo This method takes TC of O(N). This is called KMP Algorithm.
int lps(string s)
{
    vector<int> lps(s.size(), 0);
    int prefix = 0, suffix = 1;

    while (suffix < s.size())
    {
        if (s[prefix] == s[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++, suffix++;
        }
        else
        {
            if (prefix == 0)
            {
                lps[suffix] = 0;
                suffix++;
            }
            else
                prefix = lps[prefix - 1];
        }
    }
    return lps[lps.size() - 1];
}

//? This method takes TC of O(N^2).
int lps1(string s)
{
    int start = 0, end = s.size() - 1, size = 0;
    string prefix = "", suffix = "";
    while (start < s.size() - 1 && end > 0)
    {
        prefix += s[start];
        suffix = s[end] + suffix;
        if (prefix == suffix) // Here it takes O(N).
            size = max(size, start + 1);
        start++;
        end--;
    }
    return size;
}

int main()
{
    system("clear");
    string s1 = "ABCDEABCD";
    string s2 = "ABCDABCD";
    string s3 = "ABCABDABCABCABD";
    string s4 = "ABCABDABCABDABDAB";

    cout << "Answer with two pointer." << endl;
    cout << "Longest size of prefix & suffix is: " << lps(s1) << endl;
    cout << "Longest size of prefix & suffix is: " << lps(s2) << endl;
    cout << "Longest size of prefix & suffix is: " << lps(s3) << endl;
    cout << "Longest size of prefix & suffix is: " << lps(s4) << endl;

    cout << "Answer with KMP algorithm." << endl;
    cout << "Longest size of prefix & suffix is: " << lps1(s1) << endl;
    cout << "Longest size of prefix & suffix is: " << lps1(s2) << endl;
    cout << "Longest size of prefix & suffix is: " << lps1(s3) << endl;
    cout << "Longest size of prefix & suffix is: " << lps1(s4) << endl;
}