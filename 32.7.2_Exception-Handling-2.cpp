#include <iostream>
#include <string>
using namespace std;

//* How exception class look like by default in system. It is not actual implementation but it's an approximately look like.
// class exception
// {
// protected:
//     string msg;
// public:
//     exception(string msg)
//     {
//         this->msg = msg;
//     }
//     string what()
//     {
//         return msg;
//     }
// };

int main()
{
    try
    {
        int *p = new int[10000000000000000];
        cout << "Memory allocation is successful.\n";
        delete[] p;
    }
    // catch (const exception &e)
    catch (const bad_alloc &e)
    {
        cout << "Exception Occurred due to line 9: " << e.what() << endl;
    }

    return 0;
}