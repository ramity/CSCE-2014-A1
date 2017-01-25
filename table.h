#include "person.h"
#include <iostream>
#include <string>
using namespace std;

class Table
{
public:
    Table();
    Table(const Table & table);
    ~Table();

    void print();
    void read();
    void read(string file_name);
    void search_first_name(const string first_name);
    void search_last_name(const string last_name);
    void search_year(const int low, const int high);

private:
    static const bool DEBUG = false;
    static const int TABLE_SIZE = 30;
    Person data[TABLE_SIZE];
    int count;
};
