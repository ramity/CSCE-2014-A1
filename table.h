#include "person.h"
#include <fstream>
#include <iostream>
#include <string>

//for pretty CLI printing
#include <iomanip>

using namespace std;

class Table
{
public:
    Table();
    Table(const Table & table);
    ~Table();

    void print();
    void read(string file_name);

    void searchFirstName(const string firstName);
    void searchLastName(const string lastName);
    void searchYear(const int low, const int high);

    //getter + setter
    void setCount(const int count);
    int getCount();

private:
    static const bool DEBUG = true;
    static const int TABLE_SIZE = 30;
    Person data[TABLE_SIZE];
    int count;
};
