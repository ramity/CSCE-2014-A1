#include "table.h"

int main()
{
    Table table;
    table.read("people.txt");

    while(true)
    {
        int choice = 0;
        string term = "";

        cout << "Actions:" << endl;
        cout << "1 : print" << endl;
        cout << "2 : searchFirstName" << endl;
        cout << "3 : searchLastName" << endl;
        cout << "4 : searchYear(low, high)" << endl;

        cin >> choice;

        if(choice == 1)
        {
            table.print();
        }
        else if(choice == 2)
        {
            cout << "Enter a first name to search by" << endl;
            cin >> term;
            table.searchFirstName(term);
        }
        else if(choice == 3)
        {
            cout << "Enter a last name to search by" << endl;
            cin >> term;
            table.searchLastName(term);
        }
        else if(choice == 4)
        {
            int low = 0;
            int high = 0;

            cout << "Enter a low year" << endl;
            cin >> low;

            cout << "Enter a high year" << endl;
            cin >> high;

            table.searchYear(low, high);
        }
        else
        {
            cout << "invalid responce" << endl;
        }
    }
}
