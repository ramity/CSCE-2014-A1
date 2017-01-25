#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person();
    Person(const Person & person);
    ~Person();

    void set(const string fn, const string ln,
        const int birth, const int death, const string contrib);
    void get(string &fn, string &ln,
            int &birth, int &death, string &contrib);

    void print();
    void read();
    void read(ifstream &din);

private:
    static const bool DEBUG = false;
    string first_name;
    string last_name;
    int birth_year;
    int death_year;
    string contribution;
};
