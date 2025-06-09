//* Multiple Inheritance.
//* Visualization link:- https://excalidraw.com/#json=37N2qgeUR5H5q5HGv7gA3,QnHhLbhp2Giyol9hGx3aYQ
#include <iostream>
#include <string>
using namespace std;

class Engineer
{
public:
    string name;
    string specialization;

    void specialist()
    {
        cout << "My name is " << name;
        cout << ", & I have specialized in " << specialization << " field.\n";
    }
};

class YouTuber
{
public:
    string channelName;
    int subscriber;

    void channelDetails()
    {
        cout << "My channel name is " << channelName;
        cout << ", & I have " << subscriber << " subscriber on my youtube channel.\n";
    }
};

//* Here firstly Engineer class default constructor will be called & than YouTuber class constructor will be called & at last CodingTeacher constructor will be called. Because we firstly inherit Engineer class & than we inherit YouTuber class, if we interchange this than order of constructor calling will be also change.
class CodingTeacher : public Engineer, public YouTuber
{
public:
    string techStack;

    CodingTeacher(string name, string specialization, string channelName, int subscriber, string techStack)
    {
        this->name = name;
        this->specialization = specialization;
        this->channelName = channelName;
        this->subscriber = subscriber;
        this->techStack = techStack;
    }

    void techDetails()
    {
        //* We can call the function from parent class because they are in public and this class treat those as an public.
        specialist();
        channelDetails();
        cout << "I will teach you " << techStack << endl;
    }
};

int main()
{
    CodingTeacher T1("Madhur", "Computer Science", "DevFlux", 8000000, "Full Stack MERN Web Development & React Native App Development");

    T1.techDetails();

    return 0;
}