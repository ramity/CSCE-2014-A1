#include "table.h"

int main()
{
    Table table;
    table.read("people.txt");
    table.print();

    table.searchFirstName("Chuck");

    table.searchLastName("Zuckerberg");

    table.searchYear(1973, 2011);
}
