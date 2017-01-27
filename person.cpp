#include "person.h"
//begin class construct declarations
Person::Person()
{
    this->firstName = "init";
    this->lastName = "init";
    this->birthYear = -1;
    this->deathYear = -1;
    this->contribution = "init";
}
Person::Person(const Person &person)
{
    this->firstName = person.firstName;
    this->lastName = person.lastName;
    this->birthYear = person.birthYear;
    this->deathYear = person.deathYear;
    this->contribution = person.contribution;
}
Person::~Person()
{
    //destructor
}
//setters
void Person::setFirstName(const string fn)
{
    this->firstName = fn;
}
void Person::setLastName(const string ln)
{
    this->lastName = ln;
}
void Person::setBirth(const int birth)
{
    this->birthYear = birth;
}
void Person::setDeath(const int death)
{
    this->deathYear = death;
}
void Person::setContribution(const string contribution)
{
    this->contribution = contribution;
}
//getters
string Person::getFirstName()
{
    return this->firstName;
}
string Person::getLastName()
{
    return this->lastName;
}
int Person::getBirth()
{
    return this->birthYear;
}
int Person::getDeath()
{
    return this->deathYear;
}
string Person::getContribution()
{
    return this->contribution;
}
//other required functions
void Person::print()
{
    const char s = ' ';
    const int w = 20;

    cout << left << setw(w) << setfill(s) << this->getFirstName();
    cout << left << setw(w) << setfill(s) << this->getLastName();
    cout << left << setw(w) << setfill(s) << this->getBirth();
    cout << left << setw(w) << setfill(s) << this->getDeath();
    cout << left << setw(w) << setfill(s) << this->getContribution();
    cout << endl;
}
