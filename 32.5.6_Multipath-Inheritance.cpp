//* Multipath Inheritance.
//* Visualization link:- https://excalidraw.com/#json=JknxgwFYRsCuUN1gsIt9P,7mnZvPrgvCOcT3WJm7eeXQ
#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    string name;
    int age;

    void display()
    {
        cout << "My name is " << name << endl;
    }
};

//* virtual keyword is used when we want to recognize multiple same value as only one unique value, means it consider only one value from multiple values.
class Engineer : public virtual Human
{
public:
    string specialization;

    void specialist()
    {
        cout << "I have specialized in " << specialization << " field.\n";
    }
};

class YouTuber : public virtual Human
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

class CodingTeacher : public Engineer, public YouTuber
{
public:
    string techStack;

    CodingTeacher(string name, string specialization, string channelName, int subscriber, string techStack)
    {
        //* In this two name attributes are present one from Engineer & another from YouTuber. & it also have two display().
        this->name = name;
        this->specialization = specialization;
        this->channelName = channelName;
        this->subscriber = subscriber;
        this->techStack = techStack;
    }

    void techDetails()
    {
        //* We can call the function from parent class because they are in public and this class treat those as an public. In this type of problem we use virtual keyword.
        specialist();
        channelDetails();
        cout << "I will teach you " << techStack << endl;
    }
};

int main()
{
    CodingTeacher T1("Madhur", "Computer Science Engineering", "DevFlux", 100000, "Full Stack MERN Web Development");

    T1.display();
    T1.techDetails();

    return 0;
}