#include <iostream>
#include <string>

//for pretty CLI printing
#include <iomanip>

using namespace std;

class Person
{
public:
    Person();
    Person(const Person &person);
    ~Person();

    //setters
    void setFirstName(const string fn);
    void setLastName(const string ln);
    void setBirth(const int birth);
    void setDeath(const int death);
    void setContribution(const string contribution);

    //getters
    string getFirstName();
    string getLastName();
    int getBirth();
    int getDeath();
    string getContribution();

    void print();
    //void read();
    //void read(ifstream &din);

private:
    static const bool DEBUG = false;
    string firstName;
    string lastName;
    int birthYear;
    int deathYear;
    string contribution;
};
